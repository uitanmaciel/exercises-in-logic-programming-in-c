/*Question 06: Read two integers and display the result of dividing between them and the residual.*/

#include <stdio.h>
#include <stdlib.h>

main()
{
	int a, b, result, remainder;
	printf("Enter two integers to perform the division: \n");
	scanf("%d%d", &a, &b);
	result = a / b;
	remainder = a % b;
	printf("%d / %d = %d and that's left %d", a, b, result, remainder);
}
