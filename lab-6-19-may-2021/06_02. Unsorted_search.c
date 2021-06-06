/**
Search an item in given unsorted list.
*/

#include <stdio.h>

int main()
{
     int arr[100], n, i, num, pos = -1;

     printf("Enter number of elements to be added in the array(Max limit = 100) : ");
     scanf("%d",&n);

     if(n > 100)
     {
          printf("Error!!! Number of elements is greater than the Maximum Limit 100!!!\n");
     }
     else
     {
          printf("Enter %d integers in the array : \n",n);
          for(i = 0; i < n; i++)
               scanf("%d",&arr[i]);

          printf("Enter the number to be searched : ");
          scanf("%d",&num);

          for(i = 0; i < n; i++)
          {
               if(arr[i] == num)
               {
                    pos = i;
                    break;
               }
          }

          if(pos == -1)
               printf("The value %d is not present in the array.\n",num);
          else
               printf("The value %d is present at position %d in the array.",num,pos+1);
     }
}
