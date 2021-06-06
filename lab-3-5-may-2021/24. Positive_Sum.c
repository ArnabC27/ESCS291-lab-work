#include <stdio.h>

int main()
{
     int a,b,c,d,e,p=0;
     float s = 0.0;
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

     if(a>0)
     {
          p++;
          s += a;
     }
     if( b>0)
     {
          p++;
          s += b;
     }
     if(c>0)
     {
          p++;
          s += c;
     }
     if(d>0)
     {
          p++;
          s += d;
     }
     if(e>0)
     {
          p++;
          s += e;
     }

     if(p > 0)
     {
          printf("Number of positive numbers : %d\n",p);
          printf("Average value of the said positive numbers : %.2f",(s/p));
     }
     else
          printf("There are no positive numbers!");


     return 0;
}
