/*Question 07: Read the date of birth and present the person's age in days, months and years.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main()
{
	int birth_date, days, months, years;
    printf("Enter your date of birth (in days): \n");
    scanf("%d", &birth_date);
    days = (birth_date % 365) % 30;
    months = (birth_date % 365) / 30;
    years = birth_date / 365;
    
    printf("You have %d years , %d months and %d days old.", years, months, days);
}
