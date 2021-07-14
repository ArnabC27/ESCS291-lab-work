/**
112: Write a program in C which read a binary file (any image file)  and  create another file and write the corresponding integer value.
*/

#include <stdio.h>

int main()
{
    //Reading a .bin file and creating a .txt file to store output:
    FILE *fr = fopen("black.bin", "rb");
    FILE *fw = fopen("res.txt", "wb");
    int c;

    if (!fr)
    {
        printf("Unable to open file!");
        return 1;
    }

    //Extracting characters from .bin file and printing ASCII values in .txt file :
    while((c = fgetc(fr)) != EOF)
    {
        fprintf(fw, "%d ", c);
    }
    printf("File reading and writing complete!!!\n");

    fclose(fr);
    fclose(fw);

    return 0;
}
