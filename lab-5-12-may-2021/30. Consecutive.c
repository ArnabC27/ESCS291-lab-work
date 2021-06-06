/**
30. Write a C program to print the numbers from the lowest to the highest (inclusive) and the sum of consecutive odd integers from a given pair of numbers.
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24
*/

#include <stdio.h>

int main()
{
     int a,b,i;
     printf("Input a pair of numbers : \nInput first number of the pair : ");
     scanf("%d",&a);
     printf("Input second number of the pair : ");
     scanf("%d",&b);

     int max,min,sum = 0;

     if(a > b)
     {
          max = a;
          min = b;
     }
     else
     {
          max = b;
          min = a;
     }

     printf("List of odd numbers : \n");
     for(i = min; i <= max; i++)
     {
          if(i % 2 != 0)
          {
               printf("%d\n",i);
               sum += i;
          }
     }
     printf("Sum = %d",sum);
     return 0;
}
