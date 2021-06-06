#include <stdio.h>

int main()
{
     int km;
     float lt;
     printf("Input total distance in km : ");
     scanf("%d", &km);
     printf("Input total fuel spent in litres : ");
     scanf("%f", &lt);

     printf("Average consumption (km/lt) : %f", (km/lt));

     return 0;
}
