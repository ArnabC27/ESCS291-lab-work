/**
27. Write a C program to check a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.
Test Data :
Input an integer: 13
Expected Output:
Positive Odd
*/

#include <stdio.h>

int main()
{
     int n;
     printf("Input an integer : ");
     scanf("%d",&n);

     if(n == 0)
          printf("Even");
     else
     {
          if(n % 2 == 0)
          {
               if(n > 0)
                    printf("Positive Even");
               else
                    printf("Negative Even");
          }
          else
          {
               if(n > 0)
                    printf("Positive Odd");
               else
                    printf("Negative Odd");
          }
     }

     return 0;
}
