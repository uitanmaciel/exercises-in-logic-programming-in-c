/*Question 03: Given the size of the radius of a circle, calculate the area and perimeter.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float CalculatePI()
{
	int n = 100000, i; /*'n' Number of terms in the series (the higher, the more accurate).*/
	double sum = 0.0;
	
	for(i = 0; i < n; i++)
	{
		double term = (i % 2 == 0) ? 1.0 : -1.0;
		term *= 4.0 / ( 2 * i + 1); /*Formula to calculate each term*/
		sum += term;
	}
	return sum;
}

float AreaCalculate(int radius)
{	
	float result = CalculatePI() * pow(radius, 2);
	return result;
}

float PerimeterCalculate(int radius)
{
	float result = 2 * CalculatePI() * radius;
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
