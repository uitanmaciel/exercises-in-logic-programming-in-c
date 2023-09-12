/*Question 16 - In a far away country, people are addicted to a very simple gambling game. The game is based on numbers and is called Jogo do Bicho. 
The name of the game derives from the fact that the numbers are divided into 25 groups, 
depending on the value of the last two digits (tens and ones), and each group is named after an animal. Each group is associated with an animal as 
follows: the first group (donkey) consists of the numbers 01, 02, 03 and 04; the second group (eagle) is made up of the numbers 05, 06, 07 and 08; 
and so on, until the last group containing the numbers 97, 98, 99 and 00. The rules of the game are simple. 
At the time of betting, the player decides the bet value V and a number N (0 <= N <= 99999). Every day, in the city's main square, 
a number M is drawn (0 <=M <= 99999). Each bettor's prize is calculated as follows:

If M and N have the same last four digits (thousands, hundreds, tens and ones), the bettor receives V × 3000 (for example, N = 14302 and M = 34302);
If M and N have the same last three digits (hundreds, tens and ones), the bettor receives V × 500 (for example, N = 33444 and M = 22444);
If M and N have the same last two digits (tens and ones), the bettor receives V × 50 (for example, N = 112 and M = 142212);
If M and N have the last two digits in the same group, corresponding to the same animal, the bettor receives V × 16 (for example, N = 82197 and M = 337600);
If none of the above cases occur, the bettor receives nothing.

Obviously, the prize given to each bettor is the maximum possible according to the rules above. However, it is not possible to accumulate prizes, 
so only one of the criteria above must be applied when calculating the prize. Write a program in C that reads the amount bet, the number 
chosen by the bettor, and the number drawn, calculates and prints the prize that the bettor should receive.

Rules:
- Use only if, else or switch selection structures*/

*/

#include <stdio.h>

main()
{
    float bet;
    int player_number, draw_number, pm, pc, pd, pu, dm, dc, dd, du, _pg, _dg;

    printf("What is the value of your bet?\n");
    scanf("%f", &bet);
    printf("Choose your number.\n");
    scanf("%d", &player_number);
    printf("To check your prize, enter the number that was drawn.\n");
    scanf("%d", &draw_number);

    pm = (player_number % 10000) / 1000;
    pc = (player_number % 1000) / 100;
    pd = ((player_number % 1000) %100) / 10;
    pu = player_number % 10;
    _pg = ((player_number % 1000) %100);

    dm = (draw_number % 10000) / 1000;
    dc = (draw_number % 1000) / 100;
    dd = ((draw_number % 1000) % 100) / 10;
    du = draw_number % 10;
    _dg = ((draw_number % 1000) % 100);

    if(pm == dm && pc == dc && pd == dd && pu == du)
        printf("Congratulations! You bet $ %.2f and your prize is: $ %.2f", bet, bet * 3000);
    else if(pc == dc && pd == dd && pu == du)
        printf("Congratulations! You bet $ %.2f and your prize is: $ %.2f", bet, bet * 500);
    else if(pd == dd && pu == du)
        printf("Congratulations! You bet $ %.2f and your prize is: $ %.2f", bet, bet * 50);
    else
    {
        if(_pg - _dg > -5 && _pg - _dg < 5)
            printf("Congratulations! You bet $ %.2f and your prize is: $ %.2f", bet, bet * 16);
        else
        printf("Unfortunately, you didn't win the prize this time. Try next time.");
    }
}
