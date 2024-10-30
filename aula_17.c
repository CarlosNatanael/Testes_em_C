#include <stdio.h>

/*
Utilizando o for (para)
Faça um programa, no qual receba e soma 5 numeros
*/

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
