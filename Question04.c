/*Question 04: Given the three sides of a triangle, calculate the perimeter.*/

#include <stdio.h>
#include <stdlib.h>

int PerimeterCalculate(int a, int b, int c)
{
	int result = a + b + c;
}

main()
{
	int a, b, c;
	printf("Enter values for the sides of the triangle: \n");
	scanf("%d%d%d", &a, &b, &c);
	int result = PerimeterCalculate(a, b, c);
	printf("The perimeter of the triangle is: %d", result);
}
