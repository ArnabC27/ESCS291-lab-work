#include <stdio.h>

int main()
{
     float x,y,z;
     printf("Input the first number : ");
     scanf("%f",&x);
     printf("Input the second number : ");
     scanf("%f",&y);
     printf("Input the third number : ");
     scanf("%f",&z);

     if((x+y > z) && (y+z > x) && (z+x > y))
          printf("Perimeter = %.1f",(x+y+z));
     else
          printf("Triangle not possible");

     return 0;
}
