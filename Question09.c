/*Question 09: Write an algorithm that calculates and displays the value of the volume of a can of oil, given
its radius and height.*/

#include <stdio.h>
#include <math.h>

const PI = 3.1415;

main()
{
	float height, radius, volume;
	printf("Enter the height and radius to calculate the volume of the cylinder. \n");
	scanf("%f%f", &height, &radius);
	volume = PI * pow(radius, 2) * height;
	printf("The volume of the cylinder is: %f m3", volume);
}
