/* Questão 19: Escreva um programa que leia um número inteiro positivo e mostre seu fatorial */

#include <stdio.h>

main()
{
    int num, i, fatorial = 1;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
        fatorial *= i;

    printf("Fatorial de %d: %d\n", num, fatorial);
}