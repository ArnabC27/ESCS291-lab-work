/**
105. Write a program to check a given number is odd or even using pointer.

[Marks: 5]

Example:

Enter an integer: -7
-7 is odd.
*/

#include <stdio.h>

int main()
{
     int n, f = 1;
     int *nptr = &n;

     while(f == 1)
     {
         printf("Enter an integer : ");
         scanf("%d", nptr);

         if(*nptr % 2 == 0)
            printf("\n%d is an EVEN Integer.\n\n", *nptr);
         else
            printf("\n%d is an ODD Integer.\n\n", *nptr);

         printf("Do you want to continue? (1 - Yes or 0 - No) : ");
         scanf("%d", &f);
         printf("\n");
     }

     printf("Thank You!!!\n\n");
     return 0;
}
