/**
97. Ackerman function using recursion

A(m,n) = n + 1 if m=0;
A(m,n) = A(m-1, 1) if m> 0 and n=0
A(m,n) = A(m-1, A(m,n-1)) if m>0 and n> 0
(m and n always positive value)

Output:
m= 1
n= 2
A (1, 2) = 4
Sample Output :
Solve A(2, 1)?
Answer: 5
Solve A(2, 2)?
Answer: 7
*/

#include <stdio.h>

//Ackerman Function (Recursive) :
int A(int m, int n)
{
    if(m == 0)
        return n+1;
    else if(m > 0 && n == 0)
        return A(m-1,1);
    else if(m > 0 && n > 0)
        return A(m-1, A(m, n-1));
}

//Driver Program :
int main()
{
    int m, n, cont = 0;
    printf("**Ackerman Function**\n\n");

    do
    {
         printf("m = ");
         scanf("%d", &m);
         printf("n = ");
         scanf("%d", &n);

         if(m <= 0 || n <= 0)
               printf("\nBoth m and n need to be positive!!\n");
         else
               printf("\nSolve A(%d,%d)?\nAnswer : %d\n", m,n,A(m,n));

         printf("\nDo you want to continue? (1 for Yes and 0 for No) : ");
         scanf("%d", &cont);
         printf("\n");
    }
    while(cont == 1);
    printf("Thank You!!!\n");
    return 0;
}
