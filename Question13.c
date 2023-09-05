/*Question 13: Write a C program that reads four student grades and prints that student's final grade. 
The calculation of the final grade is done by discarding the lowest of the four grades and calculating 
the arithmetic mean of the three remaining grades.

Rules:
- Use only if, else or switch selection structures*/

  #include <stdio.h>

  main()
  {
    float grade1, grade2, grade3, grade4;
    printf("Enter the 4 grades that the student obtained:\n");
    scanf("%f%f%f%f", &grade1, &grade2, &grade3, &grade4);

    if(grade2 < grade1 && grade2 < grade3 && grade2 < grade4)
        printf("Final Media: %f", (grade1 + grade3 + grade4) / 3);
    else if(grade3 < grade1 && grade3 < grade2 && grade3 < grade4)
        printf("Final Media: %f", (grade1 + grade2 + grade4) / 3);
    else if(grade4 < grade1 && grade4 < grade2 && grade4 < grade3)
        printf("Final Media: %f", (grade1 + grade2 + grade3) / 3);
    else
        printf("Final Media: %f", (grade2 + grade3 + grade4) / 3);
  }
