/*Question 17 - Archimedes has just changed schools and the first thing he noticed at the new school is that the playground seesaw is not symmetrical, 
one end is longer than the other. After playing a few times with a friend of the same weight, he realized that when he is at one end, 
the seesaw is unbalanced to his side (that is, he is at the bottom, and his friend is at the top), but when They switch sides, 
the seesaw goes unbalanced towards the friend's side. Without understanding the situation, Archimedes asked for help from another friend from another series, 
who explained that the length of the side interferes with the balance of the seesaw, as the seesaw will be balanced when P1 x C1 = P2 x C2,
where P1 and P2 are the weights of the seesaw. child on the left and right side, respectively, and C1 and C2 are the seesaw lengths on the left and right side, 
respectively. With the equation, little Jonh can now tell whether the seesaw is balanced or not, but, in addition, he wants to know which way the seesaw will descend 
if it is unbalanced. Write a program in C that reads the weights of the children and the lengths of the sides of the seesaw, 
calculates and says whether the seesaw will be balanced, will lean towards side 1 or side 2*/

/*Rules:
- Use only if, else or switch selection structures*/

#include <stdio.h>

main()
{
    float p1, p2, c1, c2;
    printf("Enter the weight of the 2 children:\n");
    scanf("%f%f", &p1, &p2);
    printf("Now enter the length of each side of the seesaw:\n");
    scanf("%f%f", &c1, &c2);

    if(p1 * c1 == p2 * c2)
        printf("The seesaw will be balanced.");
    else if(p1 * c1 > p2 * c2)
        printf("The seesaw will fall to side 1 (left).");
    else
        printf("The seesaw will fall to side 2 (right).");
}
