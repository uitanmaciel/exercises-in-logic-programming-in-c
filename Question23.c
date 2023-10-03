/* Questãon 23: Escreva um programa que receba uma série de pares de números e para cada par calcule
   a média aritmética, imprimindo o resultado. A série termina quando for o par 0,0. */

#include <stdio.h>

/// @brief 
/// @param  
main()
{
    int num1, num2;
    float media;

    printf("Digite um par de numeros: \n");
    scanf("%d %d", &num1, &num2);

    while (num1 != 0 && num2 != 0)
    {
        media = (num1 + num2) / 2;
        printf("A media aritmetica dos numeros %d e %d eh: %.2f\n", num1, num2, media);
        printf("Digite um par de numeros: \n");
        scanf("%d %d", &num1, &num2);
    }
}