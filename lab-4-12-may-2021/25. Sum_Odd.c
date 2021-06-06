/**
25. Write a C program that read 5 numbers and sum of all odd values among them.
Test Data :
Input the first number: 5
Input the second number: 7
Input the third number: 9
Input the fourth number: 10
Input the fifth number: 13
Expected Output:
Sum of all odd values: 34
*/

#include <stdio.h>

int main()
{
     int num[5];
     int i, sum;
     sum = 0;
     for(i = 0; i < 5; i++)
     {
          printf("Input number %d : ",i+1);
          scanf("%d",&num[i]);
          if(num[i] % 2 != 0)
               sum += num[i];
     }

     printf("Sum of all odd values : %d",sum);

     return 0;
}
