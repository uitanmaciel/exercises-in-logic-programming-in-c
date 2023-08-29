/*Question 02: Given the size of the side of a square, calculate the area and perimeter.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int AreaCalculate(int size_side)
{
	int result = pow(size_side, 2);
	return result;
}

int PerimeterCalculate(int size_side)
{
	int result = size_side * 4;
	return result;
}

main()
{
	int type_calc, size_side, result;
	printf("Enter the value of the side of the square. (value in cm).: \n");
	scanf("%d", &size_side);
	printf("What calculation do you want for the square? 1 - Area and 2 - Perimeter. \n");
	scanf("%d", &type_calc);
	
	if(type_calc == 1)
	{
		result = AreaCalculate(size_side);
		printf("The area of the square is: %d cm2", result);
	}
	else
	{
		result = PerimeterCalculate(size_side);
		printf("The perimeter of the square is: %d cm2", result);
	}
}
