#include <stdio.h>

int main()
{
     int d = 1329;
     printf("Number of days : %d\n",d);
     int y = d / 365;
     d = d % 365;
     int w = d / 7;
     d = d % 7;
     printf("Years : %d\n",y);
     printf("Weeks : %d\n", w);
     printf("Days : %d",d);

     return 0;
}
