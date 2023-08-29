/*Question 03: Given the size of the radius of a circle, calculate the area and perimeter.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

const float PI = 3.1415;

float AreaCalculate(int radius)
{	
	float result = PI * pow(radius, 2);
	return result;
}

float PerimeterCalculate(int radius)
{
	float result = 2 * PI * radius;
	return result;
}

main()
{
	int type_calc, radius;
	float result;
	printf("Enter the value of the radius of the circle: \n");
	scanf("%d", &radius);
	printf("What calculation do you want for the circle? 1 - Area and 2 - Perimeter. \n");
	scanf("%d", &type_calc);
	
	if(type_calc == 1)
	{
		result = AreaCalculate(radius);
		printf("The area of the circle is: %f", result);
	}
	else
	{
		result = PerimeterCalculate(radius);
		printf("The perimeter of the circle is: %f", result);
	}
}
