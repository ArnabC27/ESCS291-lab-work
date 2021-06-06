#include <stdio.h>

int main()
{
     int days;
     printf("Input no. of days : ");
     scanf("%d",&days);

     printf("%d Year(s)\n%d Month(s)\n%d Day(s)",days/365,(days%365)/30,(days%365)%30);

     return 0;
}
