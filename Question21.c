/* Questão 21: Escreva um programa que imprima os 20 primeiros números primos. */

#include <stdio.h>

main()
{
    int num, i, primo = 1, cont = 0;
    for (num = 2; cont < 20; num++)
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
            printf("%d\n", num);
            cont++;
        }
    }
}