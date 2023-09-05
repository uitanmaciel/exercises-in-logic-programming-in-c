/*Question 12 - Write an rm C program that reads a number less than 9999 representing a password. 
  The program must verify if the password is valid and print "Valid Password" or if the password violates any of the following rules, 
  in which case, the program must display the corresponding violation messages.

Rules:
- Use only if, else or switch selection structures*/

  #include <stdio.h>

  main()
  {
      int password, d1, d2, d3, d4;
      printf("Enter a 4 digits password:\n");
      scanf("%d", &password);

      d1 = password / 1000;
      d2 = (password % 1000) / 100;
      d3 = (password % 100) / 10;
      d4 = password % 10;

      if(d1 == d2 && d1 == d3 && d1 == d4)
        printf("Error: The password is made up of equal numbers.");
      else if(d2 == d1 + 1 && d3 == d2 + 1 && d4 == d3 + 1)
        printf("Error: The password is formed by an increasing sequence.");
      else if (d4 == d3 - 1 && d3 == d2 - 1 && d2 == d1 - 1)
        printf("Error: The password is formed by a descending sequence.");
      else
        printf("Valid Password.");
  }
