#include <stdio.h>

int main()
{
     int amt;
     printf("Input the amount : ");
     scanf("%d",&amt);

     printf("There are :\n");
     printf("%d Note(s) of 100.00\n", (amt/100));
     amt = amt % 100;
     printf("%d Note(s) of 50.00\n", (amt/50));
     amt = amt % 50;
     printf("%d Note(s) of 20.00\n", (amt/20));
     amt = amt % 20;
     printf("%d Note(s) of 10.00\n", (amt/10));
     amt = amt % 10;
     printf("%d Note(s) of 5.00\n", (amt/5));
     amt = amt % 5;
     printf("%d Note(s) of 2.00\n", (amt/2));
     amt = amt % 2;
     printf("%d Note(s) of 1.00\n", amt);

     return 0;
}
