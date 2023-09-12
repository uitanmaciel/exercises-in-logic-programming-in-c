/*Question 15 - Fliper is a game where a metal ball falls through a maze of paths until it reaches the bottom of the maze. 
The amount of points the player earns depends on the path the ball follows. The player can control the ball's path by changing the position 
of some doors in the maze. Each door can be in position 0, which means facing left, or position 1, which means facing right.
Write a program in C that reads the position of the doors P, Q, R and indicates which of the exits the ball will fall into.

Rules:
- Use only if, else or switch selection structures*/

  #include <stdio.h>

  main()
  {
      int p, q, r;
      printf("Define the position of the doors P, Q e R. (0 - Left, 1 - Right)\n");
      scanf("%d%d%d", &p, &q, &r);

      if(q == 0 && r == 1)
        printf("The ball will come out along the way C.");
      else if(q == 0 && r == 0)
        printf("The ball will come out along the way D.");
      else if(q == 1 && p == 0)
        printf("The ball will come out along the way B.");
      else
        printf("The ball will come out along the way A.");
  }
