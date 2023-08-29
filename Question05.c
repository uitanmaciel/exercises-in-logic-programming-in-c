/*Question 05: Read an integer and display its successor*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int number;
	printf("Enter an integer to check its successor: ");
	scanf("%d", &number);
	number++;
	printf("The successor of the entered number is: %d", number); 
}
