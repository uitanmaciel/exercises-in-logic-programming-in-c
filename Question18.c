/* Questão 18: Escreva um programa que leia um conjuntos de valores, imprimindo para cada valor:
   1. Seu quadrado;
   2. Seu cubo;
   3. Sua raiz quadrada;
O conjunto é finalizado com o valor zero (0). */

#include <stdio.h>
#include <math.h>

/// @brief 
main()
{
    int num;
    float quadrado, cubo, raiz;

    printf("Digite um numero: ");
    scanf("%d", &num);

    while (num != 0)
    {
        quadrado = pow(num, 2);
        cubo = pow(num, 3);
        raiz = sqrt(num);

        printf("Quadrado: %.2f\n", quadrado);
        printf("Cubo: %.2f\n", cubo);
        printf("Raiz: %.2f\n", raiz);

        printf("Digite um numero: ");
        scanf("%d", &num);
    }
}