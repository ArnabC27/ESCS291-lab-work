/**
32. Write a C program to read a password until it is correct.
For wrong password print "Incorrect password" and for correct password print "Correct password" and quit the program.
The correct password is 1234.
Test Data :
Input the password: 1234
Expected Output:
Correct password
*/

#include <stdio.h>

int main()
{
     int pw;

     do
     {
          printf("Input the password : ");
          scanf("%d",&pw);
          if(pw != 1234)
               printf("Wrong Password!\n\n");
     }
     while(pw != 1234);

     printf("Correct Password!");

     return 0;
}
