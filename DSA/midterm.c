#include <stdio.h>
void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void sortInWave(int a[], int n)
{
    // Traverse all even elements
    for (int i = 0; i < n; i+=2)
    {
        // If current even element is smaller than previous
        if (i>0 && a[i-1] > a[i] )
            swap(&a[i], &a[i-1]);

        // If current even element is smaller than next
        if (i<n-1 && a[i] < a[i+1] )
            swap(&a[i], &a[i + 1]);
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
    sortInWave(a,n);
    printf("\nArray elements after sorting it in wave form : \n");
    printArr(a, n);
    return 0;
}

