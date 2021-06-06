/**
Delete Item from sorted list
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

          printf("\nEnter the value you want to delete in sorted array : ");
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
          {
               for(i = pos+1; i < n; i++)
                    arr[i-1] = arr[i];

               printf("The updated array is : \n");
               for(i = 0; i < n-1; i++)
                    printf("%d  ",arr[i]);
               printf("\n");

          }
     }

     return 0;
}

