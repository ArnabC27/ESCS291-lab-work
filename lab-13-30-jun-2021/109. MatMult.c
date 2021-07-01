/**
109: Multiply Matrices by Passing it to a Function using Pointer

[Marks: 15]

To perform this task three functions are made:
- To takes matrix elements from user enterData()
- To multiply two matrix multiplyMatrices()
- To display the resultant matrix after multiplication display()

Example:
Enter rows and column for first matrix: 3
2
Enter rows and column for second matrix: 3
2
Error! column of first matrix not equal to row of second.

Enter rows and column for first matrix: 2
3
Enter rows and column for second matrix: 3
2

Enter elements of matrix 1:
Enter elements a11: 3
Enter elements a12: -2
Enter elements a13: 5
Enter elements a21: 3
Enter elements a22: 0
Enter elements a23: 4

Enter elements of matrix 2:
Enter elements b11: 2
Enter elements b12: 3
Enter elements b21: -9
Enter elements b22: 0
Enter elements b31: 0
Enter elements b32: 4

Output Matrix:
24 29

6 25
*/


#include <stdio.h>

void insert(int a[][10], int b[][10], int r1, int c1, int r2, int c2);
void multiply(int a[][10], int b[][10], int m[][10], int r1, int c1, int r2, int c2);
void display(int m[][10], int r1, int c2);

void insert(int a[][10], int b[][10], int r1, int c1, int r2, int c2)
{
	int i, j;
	printf("\nEnter elements of matrix 1:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c1; j++)
		{
			printf("Enter elements a%d%d: ", i + 1, j + 1);
			scanf("%d", &a[i][j]);
		}
	}

	printf("\nEnter elements of matrix 2:\n");
	for(i = 0; i < r2; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("Enter element b%d%d: ", i + 1, j + 1);
			scanf("%d", &b[i][j]);
		}
	}
}

void multiply(int a[][10], int b[][10], int m[][10], int r1, int c1, int r2, int c2)
{
	int i, j, k;
    for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			*(*(m+i)+j) = 0;
		}
	}


	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			for(k=0; k < c1; k++)
			{
				*(*(m+i)+j) += *(*(a+i)+k) * *(*(b+k)+j);
			}
		}
	}
}

void display(int m[][10], int r1, int c2)
{
	int i, j;
	printf("\nOutput Matrix:\n");
	for(i = 0; i < r1; i++)
	{
		for(j = 0; j < c2; j++)
		{
			printf("%d  ", *(*(m+i)+j));
			if(j == c2 - 1)
				printf("\n\n");
		}
	}
}

int main()
{
	int a[10][10], b[10][10], m[10][10], r1, c1, r2, c2, i, j, k;

	printf("Enter rows and column for first matrix: ");
	scanf("%d %d", &r1, &c1);

	printf("Enter rows and column for second matrix: ");
	scanf("%d %d", &r2, &c2);

	while (c1 != r2)
	{
		printf("\nError! column of first matrix not equal to row of second.\n");
		printf("\nEnter rows and column for first matrix: ");
		scanf("%d%d", &r1, &c1);
		printf("Enter rows and column for second matrix: ");
		scanf("%d%d", &r2, &c2);
	}

	insert(a, b, r1, c1, r2, c2);
    multiply(a, b, m, r1, c1, r2, c2);
    display(m, r1, c2);

	return 0;
}
