#include <stdio.h>
void insert(int a[], int n)            // function to sort an array with insertion sort //
{
    int i, j, temp;
    for (i = 1; i < n; i++) {
        temp = a[i];
        j = i - 1;
        while(j>=0 && temp <= a[j])
        {
            a[j+1] = a[j];                /* Move the elements greater than temp to one position ahead from their current position*/
            j = j-1;
        }
        a[j+1] = temp;
    }
}
void printArr(int a[], int n)
{
    int i;                               /* function to print the array */
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
}
int main()
{
    int a[100],n,j;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Before sorting array elements are : \n");
    printArr(a, n);
    insert(a, n);
    printf("\nAfter sorting array elements are : \n");
    printArr(a, n);
    return 0;
}
