/*
// Primeiro desafio

#include <stdio.h>

int main()
{
    
    int num1, num2, num3, soma = 0;
    printf("Vamos calcular a soma do quadrado");
    printf("\nDigite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceito numero: ");
    scanf("%d", &num3);
    
    soma = (num1*num1) + (num2*num2) + (num3*num3);
    
    printf("O valor da soma do quadrado é: %d",soma);
    

    return 0;
}
*/

/*
// Segundo desafio
#include <stdio.h>

int main()
{
    float nota1, nota2, nota3, nota4, media = 0;
    
    printf("Vamos verificar a media !");
    
    printf("\nInforme a primeira nota: ");
    scanf("%f", &nota1);
    
    printf("Informe a segunda nota: ");
    scanf("%f", &nota2);
    
    printf("Informe a terceira nota: ");
    scanf("%f", &nota3);
    
    printf("Informe a quarta nota: ");
    scanf("%f", &nota4);
    
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    
    printf("A sua media é: %.2f", media);
    
    
    return 0;
}
*/


// Terceiro desafio
#include <stdio.h>

int main()
{
    
    float apt1, apt2, apt3, total_apts = 0;
    float premio = 0;
    float porcem1, porcem2, porcem3, total_porcem = 0;
    float premio1, premio2, premio3, total_premio = 0;
    
    printf("Informe o valor da aposta do apostador 1: ");
    scanf("%f", &apt1);
    printf("Informe o valor da aposta do apostador 2: ");
    scanf("%f", &apt2);
    printf("Informe o valor da aposta do apostador 3: ");
    scanf("%f", &apt3);
    
    
    printf("O informe o valor do prêmio: ");
    scanf("%f", &premio);
    
    total_apts = (float)(apt1 + apt2 + apt3);
    printf("O total de apostas foi de %.2f\n", total_apts);
    
    porcem1 = (float)(apt1 / total_apts);
    porcem1 = (float)(apt2 / total_apts);
    porcem3 = (float)(apt3 / total_apts);
    
    total_porcem = (float)(porcem1 + porcem2 + porcem3);
    printf("O total de porcentagens é %.2f\n", total_porcem);
    
    premio1 = (float)(premio * porcem1);
    premio2 = (float)(premio * porcem2);
    premio3 = (float)(premio * porcem3);
    total_premio = (float)(premio1 + premio2 + premio3);
    
    printf("O total em prêmios é %.2f\n", total_premio);
    
    printf("O apostador 1 apostou %.2f que corresponde a %.2f e deverá receber o prêmio de %.2f\n", apt1, porcem1, premio1);
    printf("O apostador 2 apostou %.2f que corresponde a %.2f e deverá receber o prêmio de %.2f\n", apt2, porcem2, premio2);
    printf("O apostador 3 apostou %.2f que corresponde a %.2f e deverá receber o prêmio de %.2f\n", apt3, porcem3, premio3);
    
    return 0;
}

