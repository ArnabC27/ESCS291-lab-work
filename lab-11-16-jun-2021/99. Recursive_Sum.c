/**
99. Calculating Sum of Natural numbers using Recursion
*/

#include <stdio.h>

//Function to find sum of 1st n Natural Numbers:
int sum(int n)
{
     if(n == 1)
          return 1;
     return n + sum(n-1);
}

//Driver Program:
int main()
{
     int n, cont=0;

     do
     {
          printf("Enter a Natural Number : ");
          scanf("%d", &n);
          if(n <= 0)
               printf("\n%d is not a Natural Number.\n",n);
          else
               printf("\nSum of %d Natural Numbers : %d\n", n, sum(n));

          printf("\nDo you want to continue? (1 for Yes and 0 for No) : ");
          scanf("%d", &cont);
          printf("\n");
     }
     while(cont == 1);
     printf("Thank You!!!\n");
     return 0;
}
