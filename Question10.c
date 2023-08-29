/*Question 10: Convert a given integer less than 32 to its binary representation.*/

#include <stdio.h>

void convertDecimalToBinary(int number, int *binary, int index)
{
	if(number == 0)
    {
        printf("%d", number);
        binary[index] = number;
    }
	else
	{
		convertDecimalToBinary(number / 2, binary, index - 1);
		printf("%d", number % 2);
		binary[index] = number % 2;
	}
}

main()
{
	int number, binary[9], i;

	for(i = 0; i < 9; i++)
        binary[i] = 0;
	do
    {
        printf("Enter an integer less than 32 to see its binary representation: \n");
        scanf("%d", &number);
        if(number > 32)
            printf("Error: The number entered must be less than 32. \n\n");
    }while(number > 32);
	printf("The number %d in binary is: ", number);
    convertDecimalToBinary(number, binary, 7);
}
