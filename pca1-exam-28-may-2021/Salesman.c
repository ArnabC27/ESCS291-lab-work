/**
        PCA1

NAME      :    ARNAB CHAKRABORTY
DEPT.     :    CSE
SEC.      :    A
ROLL NO.  :    13000120040
*/

/**
PROBLEM STATEMENT :

In a small company there are 5 salesman. Each salesman supposed to sell 3 products.
Write a program using a two dimensional array to print –
(i) The total sales by each salesman, and
(ii) The total sales of each items.
*/

#include <stdio.h>

int main()
{
     int sales[5][3], i, j, salesman, product;

     //Inputting sales data :
     for(i = 0; i < 5; i++)
     {
          printf("Input data for Salesman %d : \n",i);
          for(j = 0; j < 3; j++)
          {
               printf("Product %d : ", j);
               scanf("%d",&sales[i][j]);
          }
     }

     printf("\n");

     //Calculating sales by Salesman :
     for(i = 0; i < 5; i++)
     {
          salesman = 0;
          for(j = 0; j < 3; j++)
          {
               salesman = salesman + sales[i][j];
          }
          printf("Total Sales by Salesman %d = %d\n", i, salesman);
     }

     //Calculating sales of Products :
     for(j = 0; j < 3; j++)
     {
          product = 0;
          for(i = 0; i < 5; i++)
          {
               product = product + sales[i][j];
          }
          printf("Total Sales of Product %d = %d\n", j, product);
     }

     return 0;

}
