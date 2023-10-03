/* Questão 20: Escreva um programa que leia um número inteiro e indique se o mesmo é primo ou não */

#include <stdio.h>

main()
{
    int num, i, primo = 1;
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    for (i = 2; i < num / 2; i++)
    {
        if (num % i == 0)
        {
            primo = 0;
            break;
        }
    }

    if (primo)
        printf("O numero %d eh primo\n", num);
    else
        printf("O numero %d nao eh primo\n", num);
}