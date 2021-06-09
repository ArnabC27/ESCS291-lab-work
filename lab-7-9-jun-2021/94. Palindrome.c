/**
94. Given a number, check the number is palindromic or not with recursion and iterative method (loop).

Input Number: 121

Output; The input is palindrome
*/

#include <stdio.h>

//Function to calculate reverse of a number using Recursion technique :
int reverse_recur(int n)
{
     static int temp, rev;
     if(n == 0)
          return rev;
     else
     {
          temp = n % 10;
          rev = rev * 10 + temp;

          reverse_recur(n/10);
     }

}

//Function to calculate reverse of a number using Iteration technique :
int reverse_iter(int n)
{
     int rev = 0, r;
     while(n != 0)
     {
          r = n % 10;
          rev = rev * 10 + r;
          n = n / 10;
     }
     return rev;
}

//Driver Program :
int main()
{
     int choice, n, m, rev = 0, r;
     printf("Enter a number : ");
     scanf("%d",&n);
     m = n;

     printf("\nChoose one of the following options :\n\n");
     printf("1. Palindrome check using RECURSION.\n2. Palindrome check using ITERATION.\nEnter your Choice (1 or 2) : ");
     scanf("%d", &choice);

     switch(choice)
     {
     case 1 :
          rev = reverse_recur(n);
          printf("\nUsing RECURSION :");
          if(rev == n)
               printf("\n%d is a Palindrome Number.\n\n",n);
          else
               printf("\n%d is a not Palindrome Number.\n\n",n);
          break;

     case 2 :
          rev = reverse_iter(n);
          printf("\nUsing ITERATION :");
          if(rev == n)
               printf("\n%d is a Palindrome Number.\n\n",n);
          else
               printf("\n%d is a not Palindrome Number.\n\n",n);
          break;

     default :
          printf("\nInvalid Choice!!!\n\n");
     }

     return 0;
}
