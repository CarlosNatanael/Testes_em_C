#include <stdio.h>
/*
Switch

- Usamos o switch em casos aonde tenhamos uma estrutura grande ou confusa de if/else/if else

# Pseudocódigo

Escola(variavel)
Inicio
   Caso valor1:
       Instruções
   Caso valor2:
       Instruções
    ..
    Caso valorN:
Fim

Na linguagem C

switch(variavel){
   case valor1:
       instrucoes;
       break;
   case valor2:
       instrucoes;
       break;
   default:
       instrucoes;
}
*/

int main(){
   int valor;
   
   printf("Digite o valor de 1 a 7: ");
   scanf("%d", &valor);
   
   switch(valor) {
    case 1:
        printf("Domingo\n");
        break;
    case 2:
        printf("Segunda\n");
        break;
    case 3:
        printf("Terça\n");
        break;
    case 4:
        printf("Quarta\n");
        break;
    case 5:
        printf("Quinta\n");
        break;
    case 6:
        printf("Sexta\n");
        break;
    case 7:
        printf("Sabádo\n");
        break;    
    default:
        printf("Valor inválido\n");
        
}

}
