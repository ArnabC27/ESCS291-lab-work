/**
Write a C program to read and print the elements of an array of length 7, before print replace every negative number, zero with 100.
Test Data:
Input the 5 members of the array:
25
45
35
65
15

Expected Output:
Array values are:
n[0] = 25
n[1] = 45
n[2] = 35
n[3] = 65
n[4] = 15
*/

#include <stdio.h>

int main()
{
     int n[7], i, num;
     printf("Enter number of inputs : ");
     scanf("%d",&num);

     printf("Input the %d members of the array : \n",num);
     for(i = 0; i < num; i++)
     {
          scanf("%d",&n[i]);
          if(n[i] <= 0)
               n[i] = 100;
     }

     printf("Array values are : \n");
     for(i = 0; i < num; i++)
          printf("n[%d] = %d\n",i,n[i]);

     return 0;
}
