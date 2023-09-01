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
            case 10: printf("Dez\n"); break;
            case 11: printf("Onze\n"); break;
            case 12: printf("Doze\n"); break;
            case 13: printf("Treze\n"); break;
            case 14: printf("Quatorze\n"); break;
            case 15: printf("Quinze\n"); break;
            case 16: printf("Dezesseis\n"); break;
            case 17: printf("Dezessete\n"); break;
            case 18: printf("Dezoito\n"); break;
            case 19: printf("Dezenove\n"); break;
            case 100: printf("Cem\n"); break;

            default:
                if (number >= 20 && number < 30)
                    printf("%d = Vinte", number);
                else if (number >= 30 && number < 40)
                    printf("%d = Trinta", number);
                else if (number >= 40 && number < 50)
                    printf("%d = Quarenta", number);
                else if (number >= 50 && number < 60)
                    printf("%d = Cinquenta", number);
                else if (number >= 60 && number < 70)
                    printf("%d = Sessenta", number);
                else if (number >= 70 && number < 80)
                    printf("%d = Setenta", number);
                else if (number >= 80 && number < 90)
                    printf("%d = Oitenta", number);
                else if (number >= 90 && number < 100)
                    printf("%d = Noventa", number);
                
                if(number != 10 && number != 20 && number != 30 && number != 40 && number != 50 && number != 60 && number != 70 && number != 80 && number != 90 && number != 100 && number > 10)
                    printf(" e ");
                switch (result)
                {
                case 1: printf("Um\n"); break;
                case 2: printf("Dois\n"); break;
                case 3: printf("Tres\n"); break;
                case 4: printf("Quatro\n"); break;
                case 5: printf("Cinco\n"); break;
                case 6: printf("Seis\n"); break;
                case 7: printf("Sete\n"); break;
                case 8: printf("Oito\n"); break;
                case 9: printf("Nove\n"); break;
            }
        }
    }
}