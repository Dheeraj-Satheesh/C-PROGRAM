#include<stdio.h>
 void print(int a[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("%d ",a[i]);          //function to print array elements
    }
}
 void bubble(int a[], int n)
 {
   int i, j, temp;
   for(i = 0; i < n; i++)
    {
      for(j = i+1; j < n; j++)
        {
            if(a[j] < a[i])
            {                            // function to implement bubble sort
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
 }
void main ()
{
    int i, j,temp;
    int a[100],n;
    printf("Enter the number of elements in array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(j=0;j<n;j++)
    {
        scanf("%d",&a[j]);
    }
    printf("Before sorting array elements are - \n");
    print(a, n);
    bubble(a, n);
    printf("\nAfter sorting array elements are - \n");
    print(a, n);
}

