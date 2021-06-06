#include <stdio.h>

int main()
{
     int sec;
     printf("Input seconds : ");
     scanf("%d",&sec);

     printf("There are : \n");
     printf("H:M:S - %d:%d:%d",(sec/3600),(sec%3600)/60,(sec%3600)%60);

     return 0;
}
