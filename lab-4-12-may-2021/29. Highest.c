/**
29. Write a C program that accepts some integers from the user and find the highest value and the input position.
Test Data :
Input 5 integers:
5
7
15
23
45
Expected Output:
Highest value: 45
Position: 5
*/

#include <stdio.h>

int main()
{
     int n, max, ind,i;
     int arr[100];
     printf("Enter a number : ");
     scanf("%d",&n);


     printf("Input %d integers : \n",n);
     for(i = 0; i < n; i++)
          scanf("%d",&arr[i]);

     max = arr[0];
     ind = 0;
     for(i = 1; i < n; i++)
     {
          if(max < arr[i])
          {
               max = arr[i];
               ind = i;
          }
     }

     printf("Highest value : %d\nPosition : %d",max,ind+1);
     return 0;
}
