#include <stdio.h>

int main()
{
     int a,b;
     printf("Input the first number : ");
     scanf("%d",&a);
     printf("Input the second number : ");
     scanf("%d",&b);

     if((a%b == 0) || (b%a == 0))
          printf("Multiplied!");
     else
          printf("Not Multiplied!");

     return 0;
}
