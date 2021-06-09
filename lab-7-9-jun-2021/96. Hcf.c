/**
96. Calculation of H.C.F using Recursion
OUTPUT:
Enter the value of two natural numbers: 366 60
H.C.F of the entered numbers 366 and 60 is: 6
*/

#include <stdio.h>

//Recursive function to calculate HCF of two numbers :
int hcf(int n1, int n2)
{
     if(n2 != 0)
          return hcf(n2, n1%n2);
     else
          return n1;
}

//Driver program :
int main()
{
     int n1, n2, h;
     printf("Enter the value of two natural numbers : ");
     scanf("%d %d", &n1,&n2);

     if(n1 < 1 || n2 < 1)
          printf("\nBoth numbers should be Natural Numbers!!!\n");
     else
     {
          h = hcf(n1,n2);
          printf("\nH.C.F of the entered numbers %d and %d is: %d\n\n", n1, n2, h);
     }


     return 0;
}
