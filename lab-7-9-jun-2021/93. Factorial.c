/**
93. Using Recursion implement the factorial of a positive number.
*/

#include <stdio.h>

//Declaring the recursive function to calculate factorial :
int fact(int n);

//Defining the fact() function :
int fact(int n)
{
     if(n <= 1)
          return 1;
     else
          return n*fact(n-1);
}

//Driver program :
int main()
{
     int choice, n, i, f = 1;
     printf("Enter a positive number : ");
     scanf("%d", &n);
     if(n >= 0)
     {
          printf("\nUsing Recursion:\nFactorial of %d = %d\n\n", n,fact(n));
     }
     else
          printf("\nFactorial of negative number is undefined!!!\n");

     return 0;
}
