/**
Write a program to sort a list: Bubble Sort, Selection Sort
*/

#include <stdio.h>

int main()
{
     int arr[100], n, i, j, num, choice, max;

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

          printf("\nEnter your choice of sorting technique :\n1 for Selection Sort\n2 for Bubble Sort\n");
          printf("Enter your choice : ");
          scanf("%d",&choice);

          printf("The initial array is : \n");
          for(i = 0; i < n; i++)
               printf("%d  ",arr[i]);
          printf("\n");

          switch(choice)
          {
          case 1:        //Selection Sort
               for(i = n-1; i > 0; i--)
               {
                    max = i;
                    for(j = 0; j < i; j++)
                    {
                         if(arr[j] > arr[max])
                         max = j;
                    }
                    num = arr[max];
                    arr[max] = arr[i];
                    arr[i] = num;
               }
               break;

          case 2:        //Bubble Sort
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
               break;

          default :
               printf("Invalid Choice!!!\n");
          }

          printf("The updated array is : \n");
          for(i = 0; i < n; i++)
               printf("%d  ",arr[i]);
          printf("\n");
     }

     return 0;
}

