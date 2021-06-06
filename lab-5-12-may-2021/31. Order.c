/**
31. Write a C program to check if two numbers in a pair is in ascending order or descending order.
Test Data :
Input a pair of numbers (for example 10,2 : 2,10):
Input first number of the pair: 10
Expected Output:
Input second number of the pair: 2
The pair is in descending order!
*/

#include <stdio.h>

int main()
{
     int a,b;
     printf("Input a pair of numbers : \nInput first number of the pair : ");
     scanf("%d",&a);
     printf("Input second number of the pair : ");
     scanf("%d",&b);

     if(a > b)
          printf("The pair is in descending order!");
     else
          printf("The pair is in ascending order!");
     return 0;
}
