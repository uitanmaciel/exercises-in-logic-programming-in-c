/*Write a C program that reads two strings of three numbers corresponding to the age in years months and days of two people. 
The program must check and print which of the two people is older or if they are the same age. 
Eg: if the values read are 8 years, 4 months and 2 days for the first person and 8 years, 3 months and 15 days for the second person, the program should print: "The first person is older".

Rules:
- Use only if, else or switch selection structures*/

  #include <stdio.h>

  main()
  {
      int y1, m1, d1, y2, m2, d2;
      printf("Enter the age of the first person. (Format: 'Y/M/D'. Ex.: 8 years, 4 months e 2 days.)\n");
      scanf("%d%d%d", &y1, &m1, &d1);

      printf("Enter the age of the second person. (Format: 'Y/M/D'. Ex.: 8 years, 4 months e 2 days.)\n");
      scanf("%d%d%d", &y2, &m2, &d2);

      if(y1 > y2)
        printf("The first person is older.");
      else if(y1 < y2)
        printf("The second person is older.");
      else
        if(m1 > m2)
            printf("The first person is older.");
        else if(m1 < m2)
            printf("The second person is older.");
        else
            if(d1 > d2)
                printf("The first person is older.");
            else if (d1 < d2)
                printf("The second person is older.");
            else
                printf("Both people are the same age.");
  }
