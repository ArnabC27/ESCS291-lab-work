/**
Write a C program to calculate the average marks of mathematics of some students.
Input 0 (excluding to calculate the average) or negative value to terminate the input process.

Test Data :
Input Mathematics marks (0 to terminate): 10
15
20
25
0
Expected Output:
Average marks in Mathematics: 17.50
*/

#include <stdio.h>

int main()
{
     int mrks, c = 0;
     float sum = 0;

     printf("Input Mathematics marks (0 to terminate) : \n");
     while(1)
     {
          scanf("%d",&mrks);
          if(mrks != 0)
          {
               sum = sum + mrks;
               c++;
          }
          else
               break;
     }

     printf("Average marks in Mathematics : %.2f\n",(sum/c));
     return 0;
}

