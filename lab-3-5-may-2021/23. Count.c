#include <stdio.h>

int main()
{
     int a,b,c,d,e,p=0,n=0;
     printf("Input the first number : ");
     scanf("%d",&a);
     printf("Input the second number : ");
     scanf("%d",&b);
     printf("Input the third number : ");
     scanf("%d",&c);
     printf("Input the fourth number : ");
     scanf("%d",&d);
     printf("Input the fifth number : ");
     scanf("%d",&e);

     p = a > 0 ? p+1 : p;
     n = a < 0 ? n+1 : n;
     p = b > 0 ? p+1 : p;
     n = b < 0 ? n+1 : n;
     p = c > 0 ? p+1 : p;
     n = c < 0 ? n+1 : n;
     p = d > 0 ? p+1 : p;
     n = d < 0 ? n+1 : n;
     p = e > 0 ? p+1 : p;
     n = e < 0 ? n+1 : n;

     printf("Number of positive numbers : %d\n",p);
     printf("Number of negative numbers : %d\n",n);

     return 0;
}
