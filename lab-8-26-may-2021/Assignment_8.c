/**
Write a single source file to program which solve the below set of problems.
Write individual function for each solution.
*/

#include <stdio.h>

/**
Program to read and print the elements of an array of length 7, before print,
put the triple of the previous position starting from the second position of the array.
*/
void triple()
{
     int n[7], size, i;
     printf("Enter number of elements to be shown (Max=7) : ");
     scanf("%d", &size);
     printf("Input the first number of the array : ");
     scanf("%d", &n[0]);
     printf("\n");

     for(i = 1; i < size; i++)
          n[i] = 3 * n[i-1];

     printf("Output : \n");
     for(i = 0; i < size; i++)
          printf("n[%d] = %d\n", i, n[i]);
     printf("\n");
}

/**
Program to read an array of length 5 and print the position and value of the array elements
of value less than 5.
*/
void printLessThan5()
{
     int A[5], i;
     printf("Input the 5 members of the array : \n");
     for(i = 0; i < 5; i++)
          scanf("%d", &A[i]);
     printf("\n");

     printf("Members of the array less than 5 are : \n");
     for(i = 0; i < 5; i++)
     {
          if(A[i] < 5)
               printf("A[%d] = %.1f\n", i, (float)(A[i]));
     }
     printf("\n");
}

/**
Program to read an array of length 6, change the first element by the last,the second element by the
fifth and the third element by the fourth and print the elements of the modified array.
*/
void swapPosition()
{
     int array_n[6], i, size, n;
     printf("Enter number of elements (Max=6) : ");
     scanf("%d", &size);
     printf("Input the %d members of the array : \n", size);
     for(i = 0; i < size; i++)
          scanf("%d",&array_n[i]);
     printf("\n");

     for(i = 0; i < size/2; i++)
     {
          n = array_n[i];
          array_n[i] = array_n[size-1-i];
          array_n[size-1-i] = n;
     }

     printf("Modified Array : \n");
     for(i = 0; i < size; i++)
          printf("array_n[%d] = %d\n", i, array_n[i]);
     printf("\n");
}

/**
Program to read an array of length 6 and find the smallest element and its position.
*/
void smallestElement()
{
     int a[6], i, n, min, minpos;
     printf("Input the length of the array : ");
     scanf("%d", &n);
     printf("Input the array elements : \n");
     for(i = 0; i < n; i++)
          scanf("%d", &a[i]);
     printf("\n");

     min = a[0];
     minpos = 0;
     for(i = 1; i < n; i++)
     {
          if(a[i] < min)
          {
               min = a[i];
               minpos = i;
          }
     }

     printf("Smallest Value : %d\nPosition of the element : %d\n\n",min,minpos);
}

/**
Program that accepts principle, rate of interest, time and compute the simple interest.
*/
void simpleInterest()
{
     float p, r, t, si;
     printf("Input principle, Rate of interest & time to find simple interest :\n");
     printf("p (in Rs.) = ");
     scanf("%f",&p);
     printf("r (in %%) = ");
     scanf("%f",&r);
     printf("t (in years) = ");
     scanf("%f", &t);
     si = (p * r * t)/100.0;
     printf("Simple interest = %.0f\n\n",si);
}

/**
Program that accepts a distance in centimeters and prints the corresponding value in inches.
*/
void cmToInches()
{
     float cm;
     printf("Input the distance in cm : ");
     scanf("%f",&cm);
     printf("\nDistance of %.2f cms in inches is : %.2f inches\n\n", cm, cm*0.3937);
}

/**
Program that swaps two numbers without using third variable.
*/
void swapWithout3rdVariable()
{
     int x, y;
     printf("Input the value of x & y : ");
     scanf("%d %d", &x, &y);
     printf("\nBefore swapping the value of x & y : %d %d\n", x, y);
     x = x + y;
     y = x - y;
     x = x - y;
     printf("After swapping the value of x & y : %d %d\n\n", x, y);
}

/**
Driver Program
*/
int main()
{
     int choice = 0;
     printf("Given Questions : \n\n");
     printf("45. Write a C program to read and print the elements of an array of length 7, before print,\nput the triple of the previous position starting from the second position of the array. \nFor example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162\n\n");
     printf("46. Write a C program to read an array of length 5 and print the position and value of the \narray elements of value less than 5.\n\n");
     printf("47. Write a C program to read an array of length 6, change the first element by the last, \nthe second element by the fifth and the third element by the fourth.\nPrint the elements of the modified array. \n\n");
     printf("48. Write a C program to read an array of length 6 and find the smallest element and its position.  \n\n");
     printf("49. Write a C program that accepts principle, rate of interest, time and compute the simple interest. \n\n");
     printf("50. Write a C program that accepts a distance in centimeters and prints the corresponding value in inches. \n\n");
     printf("51. Write a C program that swaps two numbers without using third variable. \n\n");
     printf("Enter your choice (45-51) : ");
     scanf("%d", &choice);
     printf("\n");

     switch(choice)
     {
     case 45 :
          triple();
          break;
     case 46 :
          printLessThan5();
          break;
     case 47 :
          swapPosition();
          break;
     case 48 :
          smallestElement();
          break;
     case 49 :
          simpleInterest();
          break;
     case 50 :
          cmToInches();
          break;
     case 51 :
          swapWithout3rdVariable();
          break;
     default :
          printf("\nSorry! Question doesn't exist!!!\n\n");
     }
     printf("Thank You!!!\n\n");
     return 0;
}
