/*
Question 40: Write a program that receives an integer from 1 to 100 and displays the number in full on the screen.

Rules:
- Use only the standard libraries (<stdio.h> and <stdlib.h>);
- Do not use repetition structures;
- Do not use vectors;
- Use only if, else or switch selection structures.
*/

#include <stdio.h>

main()
{
    int number, result;
    printf("Enter a number from 1 to 100: ");
    scanf("%d", &number);

    result = number % 10;

    if (number < 1 || number > 100)
    {
        printf("Invalid number\n");
    }
    else
    {
        switch (number)
        {
            case 10: printf("Ten\n"); break;
            case 11: printf("Eleven\n"); break;
            case 12: printf("Twelve\n"); break;
            case 13: printf("Thirteen\n"); break;
            case 14: printf("Fourteen\n"); break;
            case 15: printf("Fifteen\n"); break;
            case 16: printf("Sixteen\n"); break;
            case 17: printf("Seventeen\n"); break;
            case 18: printf("Eighteen\n"); break;
            case 19: printf("Nineteen\n"); break;
            case 100: printf("One Hundred\n"); break;

            default:
                if (number >= 20 && number < 30)
                    printf("%d = Twenty", number);
                else if (number >= 30 && number < 40)
                    printf("%d = Thirty", number);
                else if (number >= 40 && number < 50)
                    printf("%d = Forty", number);
                else if (number >= 50 && number < 60)
                    printf("%d = Fifty", number);
                else if (number >= 60 && number < 70)
                    printf("%d = Sixty", number);
                else if (number >= 70 && number < 80)
                    printf("%d = Seventy", number);
                else if (number >= 80 && number < 90)
                    printf("%d = Eighty", number);
                else if (number >= 90 && number < 100)
                    printf("%d = Ninety", number);                
                
                switch (result)
                {
                    case 1: printf("One\n"); break;
                    case 2: printf("Two\n"); break;
                    case 3: printf("Three\n"); break;
                    case 4: printf("Four\n"); break;
                    case 5: printf("Five\n"); break;
                    case 6: printf("Six\n"); break;
                    case 7: printf("Seven\n"); break;
                    case 8: printf("Eight\n"); break;
                    case 9: printf("Nine\n"); break;
                }
        }
    }
}