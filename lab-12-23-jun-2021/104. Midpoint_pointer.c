/**
104: Write a program which find the middle point of an float Array using two different pointer variables and show the value of middle point.

Assume the size of the array is odd.

[Marks: 5]
*/

#include <stdio.h>

int main()
{
     int n, i;
     float mid, arr[100];
     int *nptr = &n;
     float *midptr = &mid;

     printf("Enter size of the array (odd number from 1-100) : ");
     scanf("%d", nptr);

     if(*nptr >= 1 && *nptr <= 100)
     {
          if(*nptr % 2 != 0)
          {
               printf("\nEnter %d elements in the array :\n", *nptr);
               for(i = 0; i < *nptr; i++)
               {
                    scanf("%f", &arr[i]);
               }
               *midptr = arr[*nptr / 2];

               printf("\nThe middle element of the array is %.2f present at index %d.\n\n", *midptr, *nptr / 2);
          }
          else
          {
               printf("\nSize of the array should be an ODD NUMBER!!!\n\n");
          }
     }
     else
     {
          printf("\nSize of the array must be an ODD NUMBER from 1 to 100!!!\n\n");
     }

     return 0;
}
