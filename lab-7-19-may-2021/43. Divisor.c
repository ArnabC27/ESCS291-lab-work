/**
Write a C program that reads an integer and find all its divisor.
Test Data:
Input an integer: 45
Expected Output:
All the divisor of 45 are:
1
3
5
9
15
45
*/

#include <stdio.h>

int main()
{
     int N, i;
     printf("Input an integer : ");
     scanf("%d",&N);

     if(N == 0)
     {
          printf("The number 0 has no divisors.\n");
     }
     else
     {
          printf("All the divisors of %d are : \n",N);
          for(i = 1; i <= N; i++)
          {
               if(N % i == 0)
                    printf("%d\n",i);
          }
     }

     return 0;
}
