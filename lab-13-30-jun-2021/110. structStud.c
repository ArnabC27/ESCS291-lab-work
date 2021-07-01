/**
110: Simple Structure Variable.

    a) Store Information(name, roll and marks) of a Student Using Structure

    b) Store Information of 10 Students Using Structure and display
*/

#include <stdio.h>
#include <string.h>

struct Student
{
    char name[30];
    int roll;
    int marks;
};

typedef struct Student stud;
int main()
{
    stud info[10];
    int i, num;
    char n[30];

    printf("Enter number of Students : ");
    scanf("%d", &num);
    printf("\n");

    for(i = 0; i < num; i++)
    {
        printf("Enter roll no., marks and marks of Student %d :\n", i+1);

        scanf("%d", &info[i].roll);

        scanf("%d", &info[i].marks);

        scanf("%s", &info[i].name);
        strcpy(n, info[i].name);
    }

    printf("\nDisplaying information of students:\n");
    for(i = 0; i < num; i++)
    {
        printf("\nInformation Student %d:\n", i+1);
        printf("Name: \t\t");
        puts(info[i].name);
        printf("Roll No. : \t%d\n", info[i].roll);
        printf("Marks: \t\t%d\n", info[i].marks);

    }
    printf("\n\n");
    return 0;
}
