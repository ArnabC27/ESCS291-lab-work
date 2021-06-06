#include <stdio.h>

int main()
{
     float w1,w2,i1,i2;
     printf("Weight - Item1 : ");
     scanf("%f",&w1);
     printf("No. of item1 : ");
     scanf("%f",&i1);
     printf("Weight - Item2 : ");
     scanf("%f",&w2);
     printf("No. of item2 : ");
     scanf("%f",&i2);

     float avg = (w1*i1 + w2*i2)/(i1+i2);
     printf("Average Value = %f",avg);

     return 0;
}
