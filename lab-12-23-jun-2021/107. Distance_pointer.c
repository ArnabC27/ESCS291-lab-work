/**
107: you have given set of (x,y) sets of pints. Write a program which output
the user co-ordinate points (x1,y1) is closed to which points.

[Marks: 15]

Example: Set of points : (x2 ,y2), (x3,y3), (x4,y4), (x5,y5).

User inputs: (x1, y1)
If the points near to (x3,y3),
it show output the (x1,y1) is closed to (x3,y3)
*/

#include <stdio.h>
#include <math.h>

float distance(int x1, int y1, int x2, int y2)
{
    float dist;
    dist = sqrt((float)(pow(x2-x1,2) + pow(y2-y1,2)));
    return dist;
}


int main()
{
     int x[100], y[100], x1, y1, i, pos, n;
     float min = 9999, dist;
     int *nptr = &n;
     int *x1ptr = &x1;
     int *y1ptr = &y1;
     float *minptr = &min;
     int f = 0;

     printf("Enter number of points to be present in the set : ");
     scanf("%d", nptr);

     printf("\nEnter coordinates of %d points in the format x y :\n", *nptr);
     for(i = 0; i < *nptr; i++)
     {
          scanf("%d%d", &x[i], &y[i]);
     }

     while(1)
     {
         f = 0;
         printf("Enter coordinates of the point (x1,y1) : ");
         scanf("%d%d", x1ptr, y1ptr);
         for(i = 0; i < n; i++)
         {
             if(x1 == x[i] && y1 == y[i])
                f = 1;
         }
         if(f == 1)
            printf("\nThe point (%d,%d) is already present in the set! Please enter another point :\n",*x1ptr,*y1ptr);
         else
            break;
     }

     printf("\nSet of points : ");
     for(i = 0; i < *nptr; i++)
     {
          if(i == *nptr-1)
               printf("(%d,%d)\n", x[i], y[i]);
          else
               printf("(%d,%d), ", x[i], y[i]);
     }
     printf("User input : (%d,%d)\n\n", *x1ptr, *y1ptr);


     for(i = 0; i < *nptr; i++)
     {
          dist = distance(*x1ptr, *y1ptr, x[i], y[i]);
          if(dist < *minptr)
          {
               *minptr = dist;
               pos = i;
          }
     }

     printf("The point (%d,%d) is closest to (%d,%d).\n\n", *x1ptr, *y1ptr, x[pos], y[pos]);
     return 0;
}
