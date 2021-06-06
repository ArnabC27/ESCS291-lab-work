/**
Write a C program to calculate the value of S where S = 1 + 1/2 + 1/3 + … + 1/50.
Expected Output:
Value of S: 4.50
*/

#include <stdio.h>

int main()
{
     int i;
     float S = 0;

     for(i =  1; i <= 50; i++)
     {
          S = S + 1.0/i;
     }

     printf("Value of S : %.2f\n",S);
     return 0;
}
