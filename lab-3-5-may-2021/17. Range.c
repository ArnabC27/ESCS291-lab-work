#include <stdio.h>

int main()
{
     int a;
     printf("Input an integer : ");
     scanf("%d",&a);
     if(a >= 0 && a <= 20)
          printf("Range [0,20]");
     else if(a > 20 && a <= 40)
          printf("Range [21,40]");
     else if(a > 40 && a <= 60)
          printf("Range [41,60]");
     else if(a > 60 && a <= 80)
          printf("Range [61,80]");
     else
          printf("Error!!! It's an invalid number!!!");

     return 0;
}
