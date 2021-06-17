/**
Binary Search - Delete, Finding, Inserting and Item using Recursion
*/

#include <stdio.h>

//Recursive Function for Binary Search:
int binSearch(int arr[], int l, int u, int x)
{
     int mid;
     if(u >= l)
     {
          mid = (u + l)/2;

          if(arr[mid] == x)
               return mid;
          if(arr[mid] > x)
               return binSearch(arr, l, mid-1, x);
          return binSearch(arr, mid+1, u, x);
     }
     return -1;
}

//Function for sorting the array using Bubble Sort:
void sort(int *arr, int n)
{
     int i, j, temp;
     for(i = 0; i < n-1; i++)
     {
          for(j = 0; j < n-i-1; j++)
          {
               if(arr[j] > arr[j+1])
               {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
               }
          }
     }
}

//Function to print the Array:
void printArray(int *arr, int n)
{
     int i;
     for(i = 0; i < n; i++)
          printf("%d ", arr[i]);
     printf("\n");
}

//Function to delete an element from Array:
void delete(int *arr, int n, int temp)
{
     arr[temp-1] = arr[temp];
     if(temp < n-1)
     {
          delete(arr, n, temp+1);
     }
}

//Function to insert element in the Array:
void insert(int *arr, int n, int num)
{
     arr[n+1] = arr[n];
     if(num <= arr[n] && num >= arr[n-1])
     {
          arr[n] = num;
          return;
     }
     insert(arr, n-1, num);
}

//Driver Program:
void main()
{
     int arr[100], n, choice, num, temp, i, cont=0;

     do
     {
          printf("Enter size of your Array : ");
          scanf("%d", &n);

          if(n <= 0)
               printf("\nArray size must be a positive number!!!!\n");
          else
          {
               printf("Enter %d elements in your Array : \n", n);
               for(i = 0; i < n; i++)
                    scanf("%d", &arr[i]);

               printf("\nChoose any one of the following operations :\n");
               printf("1 for Deleting an element from the Array.\n");
               printf("2 for Finding an element in the Array.\n");
               printf("3 for Inserting an element in the Array.\n");
               printf("Enter Your Choice : ");
               scanf("%d", &choice);

               sort(arr, n);

               printf("\nOriginal Array : \n");
               printArray(arr, n);


               switch(choice)
               {
               case 1 :
                    printf("\nEnter an element to be deleted : ");
                    scanf("%d", &num);
                    temp = binSearch(arr, 0, n-1, num);
                    if(temp == -1)
                         printf("\nSorry! The element is not found in the Array!\n");
                    else
                    {
                         delete(arr, n, temp+1);
                         printf("\nArray after Deletion : \n");
                         printArray(arr, n-1);
                    }
                    break;

               case 2 :
                    printf("\nEnter an element to be found : ");
                    scanf("%d", &num);
                    temp = binSearch(arr, 0, n-1, num);
                    if(temp == -1)
                         printf("\nSorry! The element is not found in the Array!\n");
                    else
                         printf("\n%d is present at position %d in the Array.\n", num,temp+1);
                    break;

               case 3 :
                    printf("\nEnter an element to be inserted : ");
                    scanf("%d", &num);
                    insert(arr, n, num);
                    printf("\nArray after Insertion : \n");
                    printArray(arr, n+1);
                    break;

               default :
                    printf("\nSorry! Wrong Choice!!!\n");
               }
          }

          printf("\n-------------------------------------------------------\n");
          printf("Do you want to continue? (1 for Yes and 0 for No) : ");
          scanf("%d", &cont);
          printf("-------------------------------------------------------\n");

          printf("\n");
     }
     while(cont == 1);
     printf("\nThank You!!!\n");
}

