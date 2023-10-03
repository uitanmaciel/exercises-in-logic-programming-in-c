/* Questão 25 - Chico tem 1,50 mestro e cresce 2 centímetros por ano. Zé tem 1,10 mestros
e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos anos
serão necessários para que Zé seja maior que Chico. */

#include <stdio.h>

main()
{

    float chico = 1.50, ze = 1.10;
    int anos = 0;

    while(ze <= chico){
        chico += 0.02;
        ze += 0.03;
        anos++;
    }

    printf("Serao necessarios %d anos para que Ze seja maior que Chico.\n", anos);
}