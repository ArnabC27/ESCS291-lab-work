/**
Write a single source file with below set of solution using case base menu selection
and for each solution individual function/sub-routine as applicable.
*/

#include <stdio.h>
#include <math.h>

void shift();            //52
void reverse();          //53
void realDifference();   //54
void sumSeries();        //55
void days();             //56
void sinx();             //57
void sumOfDigits();      //58
void menu59();           //59
void seriesSum();        //59(a)
void matrixMult();       //59(b)

/**
Program to shift given data by two bits to the left.
*/
void shift()
{
     int n;
     printf("Input value : ");
     scanf("%d", &n);
     printf("\nInteger value = %d\n",n);
     printf("The left shifted data = %d\n\n", n<<2);
}

/**
Program to reverse and print a given number.
*/
void reverse()
{
     int n, r, rev = 0;
     printf("Input a number : ");
     scanf("%d",&n);
     printf("\nThe original number = %d\n",n);
     while(n != 0)
     {
          r = n % 10;
          rev = rev * 10 + r;
          n = n / 10;
     }
     printf("The reverse of the said number = %d\n\n",rev);
}

/**
Program that accepts 4 real numbers from the keyboard and print
out the difference of the maximum and minimum values of these four numbers.
*/
void realDifference()
{
     float arr[4], max, min;
     int i;
     printf("Input four numbers : ");
     for(i = 0; i < 4; i++)
          scanf("%f",&arr[i]);

     max = arr[0];
     min = arr[0];
     for(i = 1; i < 4; i++)
     {
          if(arr[i] > max)
               max = arr[i];
          if(arr[i] < min)
               min = arr[i];
     }

     printf("\nDifference is %.4f\n\n", max-min);
}

/**
Program to display sum of series 1 + 1/2 + 1/3 + ………. + 1/n.
*/
void sumSeries()
{
     int n, i;
     float sum = 0.0;
     printf("Input any number : ");
     scanf("%d",&n);
     for(i = 1; i <= n; i++)
          sum = sum + (1.0/i);
     printf("\nSum = %f\n\n", sum);
}

/**
Program to create enumerated data type for 7 days and
display their values in integer constants.
*/
void days()
{
     int i= 0;
     printf("Sun = %d\n",i++);
     printf("Mon = %d\n",i++);
     printf("Tue = %d\n",i++);
     printf("Wed = %d\n",i++);
     printf("Thu = %d\n",i++);
     printf("Fri = %d\n",i++);
     printf("Sat = %d\n\n",i++);
}

/**
Program that accepts a real number x and
prints out the corresponding value of sin(1/x) using 4-decimal places.
*/
void sinx()
{
     float x;
     printf("Input value of x : ");
     scanf("%f",&x);

     printf("\nValue of sin(1/x) is %.4f\n\n", sin(1.0/x));
}

/**
Program that accepts a positive integer less than 500
and prints out the sum of the digits of this number.
*/
void sumOfDigits()
{
     int n, m, r, sum = 0;
     printf("Input a positive number less than 500 : ");
     scanf("%d",&n);
     m = n;

     if(n < 500)
     {
          while(n != 0)
          {
               r = n % 10;
               sum = sum + r;
               n = n / 10;
          }

          printf("\nSum of digits of %d is %d\n\n",m,sum);
     }
     else
          printf("\nError in Input! Number should be less than 500!!\n\n");
}

/**
Menu function for Question number 59.
*/
void menu59()
{
     int choice;
     printf("Which problem do you want to solve - \nEnter 1 for a or 2 for b : ");
     scanf("%d",&choice);

     switch(choice)
     {
     case 1 :
          seriesSum();
          break;
     case 2 :
          matrixMult();
          break;
     default :
          printf("\nWrong choice! Choose either a or b!\n\n");
     }
}

/**
Program that accepts a positive integer n less than 100 from the user
and prints out the sum 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + • • • + m^4 ,
where m is less than or equal to n. Here '^' represents exponential operation.
*/
void seriesSum()
{
     int n, sum = 0, i, j;
     printf("\nInput a positive number less than 100 : ");
     scanf("%d",&n);

     if(n < 100 && n > 0)
     {
          j = 1;
          for (i = 1; j <= n; i++)
          {
               sum = sum + j * j * j * j;
               j += i;
          }

          printf("\nSum of the series is %d\n\n", sum);
     }
     else
          printf("\nInvalid input!\n\n");
}

/**
Function to do matrix multiplication by taking user input (row, column and value of each items).
*/
void matrixMult()
{
     int a[100][100], b[100][100], mul[100][100], m, n, r, c, i, j, k, sum=0;
     printf("\nEnter number of rows and colums of 1st matrix : ");
     scanf("%d %d",&m,&n);
     printf("\nEnter number of rows and colums of 2nd matrix : ");
     scanf("%d %d",&r,&c);

     if(n != r)
          printf("\nMatrix multiplication is not possible!\nNumber of columns of 1st matrix must be equal to number of rows of 2nd matrix!!\n\n");
     else
     {
          printf("\nEnter %d elements in 1st array : \n",m*n);
          for(i = 0; i < m; i++)
          {
               for(j = 0; j < n; j++)
               {
                    scanf("%d",&a[i][j]);
               }
          }

          printf("\nEnter %d elements in 2nd array : \n",r*c);
          for(i = 0; i < r; i++)
          {
               for(j = 0; j < c; j++)
               {
                    scanf("%d",&b[i][j]);
               }
          }
          printf("\n");

          for (i = 0; i < m; i++)
          {
               for (j = 0; j < c; j++)
               {
                    for (k = 0; k < r; k++)
                    {
                         sum = sum + a[i][k] * b[k][j];
                    }

                    mul[i][j] = sum;
                    sum = 0;
               }
          }

          printf("Product of the matrices : \n\n");
          for(i = 0; i < m; i++)
          {
               for(j = 0; j < c; j++)
                    printf("%d\t",mul[i][j]);
               printf("\n");
          }
     }
     printf("\n");
}


/**
Driver Program
*/
int main()
{
     int choice = 0;
     printf("Given Questions : \n\n");
     printf("52. Write a C program to shift given data by two bits to the left. \n\n");
     printf("53. Write a C program to reverse and print a given number. \n\n");
     printf("54. Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. \n\n");
     printf("55. Write a C program to display sum of series 1 + 1/2 + 1/3 + ... + 1/n. \n\n");
     printf("56. Write a C program to create enumerated data type for 7 days and display their values in integer constants. \n\n");
     printf("57. Write a C program that accepts a real number x and prints out the corresponding value of sin(1/x) using 4-decimal places. \n\n");
     printf("58. Write a C program that accepts a positive integer less than 500 and prints out the sum of the digits of this number.\n\n");
     printf("59.\n(a) Write a C program that accepts a positive integer n less than 100 from the user and prints out the sum 1^4 + 2^4 + 4^4 + 7^4 + 11^4 + . . . + m^4 , where m is less than or equal to n. Print appropriate message (Here '^' means exponential operation).\n\n");
     printf("(b) Write a function to do matrix multiplication by taking user input (row, column and value of each items).\n\n");
     printf("Enter your choice (52-59) : ");
     scanf("%d", &choice);
     printf("\n");

     switch(choice)
     {
     case 52 :
          shift();
          break;
     case 53 :
          reverse();
          break;
     case 54 :
          realDifference();
          break;
     case 55 :
          sumSeries();
          break;
     case 56 :
          days();
          break;
     case 57 :
          sinx();
          break;
     case 58 :
          sumOfDigits();
          break;
     case 59 :
          menu59();
          break;
     default :
          printf("\nSorry! Question doesn't exist!!!\n\n");
     }
     printf("Thank You!!!\n\n");
     return 0;
}
