/**
26. Write a C program to find and print the square of each one of the even values from 1 to a specified value.
Test Data :
List of square of each one of the even values from 1 to a 4 :
Expected Output:
2^2 = 4
4^2 = 16
*/

#include <stdio.h>

int main()
{
     int n,i;
     printf("Enter a number : ");
     scanf("%d",&n);
     printf("List of square of each one of the even values from 1 to %d \n: ",n);


     for(i = 1; i <= n; i++)
     {
          if(i % 2 == 0)
          {
               printf("%d ^ 2 = %d\n",i,i*i);
          }
     }

     return 0;
}
