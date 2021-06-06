#include <stdio.h>
#include <math.h>

int main()
{
     int a,b,c,D;
     float x1,x2;
     printf("Input the first number(a) : ");
     scanf("%d",&a);
     printf("Input the second number(b) : ");
     scanf("%d",&b);
     printf("Input the third number(c) : ");
     scanf("%d",&c);

     D = b*b - 4*a*c;
     if(D < 0)
     {
          printf("The roots are conjugate complex numbers.");
     }
     else
     {
          x1 = (-b + sqrt(D))/(2.0*a);
          x2 = (-b - sqrt(D))/(2.0*a);
          printf("Root1 = %f\n",x1);
          printf("Root2 = %f",x2);
     }


     return 0;
}
