/*Question 08: Since the formula for converting Fahrenheit to Celsius is C = 5/9 (F – 32), reading a temperature value in Fahrenheit and displaying it in Celsius.*/

#include <stdio.h>

main()
{
	float f, c;
	printf("Enter the temperature in Fahrenheit: \n");
	scanf("%f", &f);
	c = (f -32) * 5 / 9;
	printf("The temperature %f in Fahrenheit corresponds %f to in Celsius", f, c);
}
