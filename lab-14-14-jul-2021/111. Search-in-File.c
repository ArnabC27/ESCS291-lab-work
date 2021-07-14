/**
111: A file "text.txt" having integer value. Write a program to search a value in the file. If value available print success otherwise failed.
*/

#include <stdio.h>
#include <stdlib.h>

/**
A file text.txt is already created which contains some integers.
*/

int main()
{
    int n, f, check;

    //Taking the integer to be searched as input :
    printf("Enter an Integer to be searched : ");
    scanf("%d", &n);
    printf("\n");

    //Opening the file in Read Mode :
    FILE *fptr;

    fptr = fopen("text.txt", "r");

    if(fptr == NULL)
    {
        printf("Sorry! Unable to Read the File!!!");
        exit(1);
    }

    //Extracting each integer from the file until EOF is reached :
    while((check = fscanf(fptr, "%d", &f)) != EOF)
    {
        //printf("%d ",f);
        //Searching Process :
        if(n == f)
        {
            printf("\nSearch Successful!!!\n\n");
            fclose(fptr);
            exit(1);
        }
    }
    printf("Search Failed!!!\n\n");

    fclose(fptr);

    return 0;
}
