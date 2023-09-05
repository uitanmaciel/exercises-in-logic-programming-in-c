/*Question 11 - Write a C program that reads a number less than 9999 and prints the sum of the middle digits (2nd and 3rd digits).

Rules:
- Use only if, else or switch selection structures.*/

#include <stdio.h>

main()
{
  int number, dg2, dg3;
  printf("Enter a number less than 9999:\n");
  scanf("%d", &number);
  dg2 = (number % 1000) / 100;
  dg3 = (number % 100) / 10;
  printf("%d + %d = %d\n", dg2, dg3, dg2 + dg3);
}
