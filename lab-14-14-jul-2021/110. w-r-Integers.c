/**
110: Write a simple program which create a file "test.txt " and do the below operations :

        - Write the integer value in the file.

        - Read the  integer fro the same file and print the value on the console
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    //Creating a File Pointer Object :
    FILE *f;

    if(f != NULL)
    {
        printf("File created successfully\n\n");
    }
    else
    {
        printf("Failed to create the file\n\n");
        exit(1);
    }

    while(1)
    {
        //Taking integer as input :
        printf("Enter an Integer (-1 should be entered to stop the input process) : ");
        scanf("%d", &n);

        if(n == -1)
        {
            break;
        }
        else
        {
            //Opening the file in Write Mode :
            f = fopen("test.txt", "a");

            //Printing the integer into the file :
            fprintf(f, "%d ", n);
            printf("The integer is written successfully in the file\n\n");
            fclose(f);
        }
    }

    //Opening the file in Read Mode :
    f = fopen("test.txt", "r");
    printf("\n\nReading from the file :\n");

    //Scanning integer from file and displaying in the Console :
    while(fscanf(f, "%d", &n) == 1)
    {
        printf("%d\n", n);
    }
    printf("End of File\n");
    fclose(f);

    return 0;
}
