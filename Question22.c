/* Questão 22: Escreva um programa que calcula e escreve o produto dos número primos entre 92 e 1478. */

#include <stdio.h>

main()
{
    int num, i, primo = 1, cont = 0;
    long produto = 1;
    for (num = 92; num <= 1478; num++)
    {
        primo = 1;
        for (i = 2; i < num; i++)
        {
            if (num % i == 0)
            {
                primo = 0;
                break;
            }
        }

        if (primo)
        {
            produto *= num;
        }
    }
    printf("Produto dos numeros primos entre 92 e 1478: %ld\n", produto);
}