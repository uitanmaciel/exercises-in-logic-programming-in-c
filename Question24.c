/* Questão 24 - Ler m e escrever m linhas com i asteriscos alinhas pela esqueda, onde i corresponde ao número
de linha corrente.
Exemplo: para m = 6 a saída do programa deve ser:

*
**
***
****
*****
******
*/

#include <stdio.h>

/// @brief 
main(){

    int m, i, j;

    printf("Digite o valor de m: ");
    scanf("%d", &m);

    for(i = 1; i <= m; i++){
        for(j = 1; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }
}