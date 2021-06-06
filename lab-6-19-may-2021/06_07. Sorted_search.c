/**
Search an item (Linear Search) in sorted list
*/

#include <stdio.h>

int main()
{
     int arr[100], n, i, j, num, pos=-1;

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

          printf("The initial array is : \n");
          for(i = 0; i < n; i++)
               printf("%d  ",arr[i]);
          printf("\n");


          for(i = n-1; i > 0; i--)
          {
               for(j = 0; j < i; j++)
               {
                    if(arr[j] > arr[j+1])
                    {
                         num = arr[j+1];
                         arr[j+1] = arr[j];
                         arr[j] = num;
                    }
               }
          }

          printf("The array after sorting is : \n");
          for(i = 0; i < n; i++)
               printf("%d  ",arr[i]);
          printf("\n");

          printf("\nEnter the value you want to search : ");
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
               printf("The value %d is not present in the array!!!\n",num);
          else
               printf("The value %d is present at position %d in the array.\n",num,pos+1);
     }

     return 0;
}

