/**
 Insert a item in unsorted list.
*/

#include <stdio.h>

int main()
{
     int arr[100], n, i, num, pos;

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

          if(n < 100)
          {
               printf("Enter the number to be inserted : ");
               scanf("%d",&num);
               printf("Enter the position where the number is to be inserted(1 to %d) : ",n+1);
               scanf("%d",&pos);

               printf("The initial array is : \n");
               for(i = 0; i < n; i++)
                    printf("%d  ",arr[i]);
               printf("\n");

               for(i = n-1; i >= pos-1; i--)
                    arr[i+1] = arr[i];
               arr[pos-1] = num;

               printf("The updated array is : \n");
               for(i = 0; i <= n; i++)
                    printf("%d  ",arr[i]);
               printf("\n");
          }
          else
          {
               printf("The array is full and you cannot insert any more items!!!");
          }
     }

     return 0;

}
