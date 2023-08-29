/* Question 01: Given the size of the base and height of a rectangle, calculate its area and perimeter.*/

#include <stdio.h>
#include <stdlib.h>

int AreaCalculate(int base, int height)
{
	int result = base * height;
	return result;
}

int PerimeterCalculate(int base, int height)
{
	int result = (base + height) * 2;
	return result;
}

main()
{
	int type_calc, base, height, result;
	printf("Enter a base value and a height value for the rectangle. (values in cm): \n");
	scanf("%d%d", &base, &height);
	printf("What calculation do you want for the rectangle? 1 - Area and 2 - Perimeter. \n");
	scanf("%d", &type_calc);
	
	if(type_calc == 1)
	{
		result = AreaCalculate(base, height);
		printf("The area of the rectangle is: %d cm2", result);
	}
	else
	{
		result = PerimeterCalculate(base, height);
		printf("The perimeter of the rectangle is: %d cm2", result);
	}		
}
