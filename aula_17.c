
/*
Utilizando o for (para)
Faça um programa, no qual receba e soma 5 numeros
*/
/*
#include <stdio.h>

int main()
{
    // Variaveis
    int numero, soma = 0;
    
    // para o int i iniciando em 0; enquanto i < 5; incrementa o i em 1
    // inicializa, criterio de parada, forma de incremento
    for(int i = 0; i < 5; i++){
        
        // Entrada
        printf("Digite um numero: ");
        scanf("%d", &numero);
    
        // Processamento
        soma = soma + numero;
    }
    
    // Saída
    printf("O valor da soma é %d", soma);
}
*/

//------------------------------------------------------------------------------
/*
Estrutura de repetição
while

Utilizado quando você precisa de um loop
onde não tenha um numero fixo de elementos
mas que tenha um criterio de parada.
*/
/*
#include <stdio.h>

int main()
{
    int numero, soma = 0;
    
    printf("Digite o numero: ");
    scanf("%d", &numero);
    
    while(numero != 0){
        
        soma = soma + numero;
        
        printf("Digite o numero: ");
        scanf("%d", &numero);
    }
    
    printf("A soma é %d", soma);
    
    return 0;
}
*/
//------------------------------------------------------------------------------

/*
Estrutura de repetição
do while (faça enquanto)

Utilizando quando você precisa de um loop
onde não tenha um numero fixo de elementos
mas que tenha um criterio de parada e a condição
de parada é checada após a primeira execução
*/
#include <stdio.h>

int main()
{
    int numero, soma = 0;
    
    do{
        
        printf("Informe um número: ");
        scanf("%d", &numero);
        
        soma = soma + numero;
    }
    while(numero != 0);
    
    printf("A soma é %d", soma);
    
    return 0;
}
