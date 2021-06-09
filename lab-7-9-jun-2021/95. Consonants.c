/**
95. Count consonants in a string (Iterative and recursive methods)

Input String: techno or TECHNO or Techno

Output: Consonants count: 5
*/

#include <stdio.h>
#include <string.h>

int count_iter(char s[]);
int count_recur(char s[], int i);

//Function to count number if vowels in a word using Iteration :
int count_iter(char s[])
{
     int i, vowels = 0;
     for(i = 0; i < strlen(s); i++)
     {
          if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
               vowels++;
     }
     return vowels;
}

//Function to count number if vowels in a word using Recursion :
int count_recur(char s[],int i)
{
     int static count = 0;
     if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
          count++;
     else if(i == strlen(s))
          return count;
     return count_recur(s,++i);
}

//Driver program :
int main()
{
     char s[100];
     int choice, c, i =0;
     printf("Input String : ");
     gets(s);

     printf("\nChoose one of the following options :\n\n");
     printf("1. Count Consonants using RECURSION.\n2. Count Consonants using ITERATION.\nEnter your Choice (1 or 2) : ");
     scanf("%d", &choice);

     switch(choice)
     {
     case 1 :
          c = count_recur(s,i);
          printf("\nUsing RECURSION ");
          break;

     case 2 :
          c = count_iter(s);
          printf("\nUsing ITERATION ");
          break;

     default :
          printf("\nInvalid Choice!!!\n");
     }

     if(choice == 1 || choice == 2)
          printf("\nConsonants count : %d\n\n", strlen(s)-c);
     return 0;
}
