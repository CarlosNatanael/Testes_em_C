from flask import Flask, render_template, request, redirect, url_for, session, flash
import sqlite3
from datetime import datetime

app = Flask(__name__)
app.secret_key = 'chave_secreta_para_sessao'   

def get_db_connection():
    conn = sqlite3.connect('dadosbolos.db')
    conn.row_factory = sqlite3.Row
    return conn

def init_db():
    conn = get_db_connection()
    conn.execute('''
        CREATE TABLE IF NOT EXISTS registros_bolo (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            data TEXT NOT NULL,
            nome TEXT NOT NULL,
            trouxe_bolo TEXT NOT NULL
        )
    ''')
    conn.commit()
    conn.close()

init_db() 

@app.route('/', methods=['GET', 'POST'])
def index():
    if request.method == 'POST':

        if not session.get('admin'):
            flash('Apenas o administrador pode adicionar registros.', 'danger')
            return redirect(url_for('login'))

        nome = request.form['nome']
        trouxe_bolo = request.form['trouxe_bolo']
        data = datetime.now().strftime('%Y-%m-%d')


        conn = get_db_connection()
        conn.execute('INSERT INTO registros_bolo (data, nome, trouxe_bolo) VALUES (?, ?, ?)',
                     (data, nome, trouxe_bolo))
        conn.commit()
        conn.close()

        flash('Registro adicionado com sucesso!', 'success')
        return redirect(url_for('index'))


    conn = get_db_connection()
    registros = conn.execute('SELECT * FROM registros_bolo ORDER BY data DESC').fetchall()
    conn.close()

    return render_template('index.html', registros=registros)


@app.route('/login', methods=['GET', 'POST'])
def login():
    if request.method == 'POST':
        username = request.form['username']
        password = request.form['password']


        if username == 'admin' and password == 'pokemar':
            session['admin'] = True
            flash('Login bem-sucedido!', 'success')
            return redirect(url_for('index'))
        else:
            flash('Credenciais inválidas', 'danger')

    return render_template('login.html')


@app.route('/logout')
def logout():
    session.pop('admin', None)
    flash('Você saiu da conta de administrador.', 'info')
    return redirect(url_for('index'))


@app.route('/edit/<int:id>', methods=['GET', 'POST'])
def edit(id):
    if not session.get('admin'):
        flash('Acesso restrito a administradores.', 'warning')
        return redirect(url_for('login'))

    conn = get_db_connection()
    registro = conn.execute('SELECT * FROM registros_bolo WHERE id = ?', (id,)).fetchone()

    if request.method == 'POST':
        trouxe_bolo = request.form['trouxe_bolo']
        

        conn.execute('UPDATE registros_bolo SET trouxe_bolo = ? WHERE id = ?', (trouxe_bolo, id))
        conn.commit()
        conn.close()
        
        flash('Registro atualizado com sucesso!', 'success')
        return redirect(url_for('index'))

    conn.close()
    return render_template('edit.html', registro=registro)

if __name__ == '__main__':
    app.run(host="0.0.0.0", port=5000, debug=True)
