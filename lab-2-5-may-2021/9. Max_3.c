#include <stdio.h>

int main()
{
     int a,b,c,max;
     printf("Input the first integer : ");
     scanf("%d",&a);
     printf("Input the second integer : ");
     scanf("%d",&b);
     printf("Input the third integer : ");
     scanf("%d",&c);

     max = (a>b)?(a>c)? a:c : (b>c)? b:c;
     printf("Maximum value of three integers : %d", max);

     return 0;
}
