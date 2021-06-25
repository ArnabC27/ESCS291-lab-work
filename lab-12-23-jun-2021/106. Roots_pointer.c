/**
106. Program to Find Roots of a Quadratic using pointer.

[Marks: 15]

Example:
Enter coefficients a, b and c: 2.3
4
5.6
root1 = -0.87+1.30i and root2 = -0.87-1.30i
*/

#include <stdio.h>
#include <math.h>

int main()
{
     float a, b, c, root1, root2, D;
     float *r1ptr = &root1;
     float *r2ptr = &root2;
     float *Dptr = &D;

     printf("Enter coefficients a, b and c : \n");
     scanf("%f%f%f", &a,&b,&c);

     *Dptr = pow(b,2) - 4.0*a*c;

     if(*Dptr > 0)
     {
          *r1ptr = (-b + sqrt(*Dptr)) / (2.0 * a);
          *r2ptr = (-b - sqrt(*Dptr)) / (2.0 * a);
          printf("\nroot1 = %.2f and root2 = %.2f\n\n", *r1ptr, *r2ptr);
     }
     else if(*Dptr == 0)
     {
          printf("\nroot1 = %.2f and root2 = %.2f\n\n", -b/(2.0*a), -b/(2.0*a));
     }
     else
     {
          *r1ptr = sqrt(-*Dptr) / (2.0 * a);
          printf("\nroot1 = %.2f + %.2fi and root2 = %.2f - %.2fi\n\n", -b/(2.0*a), *r1ptr, -b/(2.0*a), *r1ptr);
     }

     return 0;
}
