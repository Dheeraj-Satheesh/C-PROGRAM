#include<stdio.h>
int main()
{
    int a[100],n,val,i;
    printf("Enter the number of elements in an array: ");
    scanf("%d",&n);
    printf("Enter the elements: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements to be searched: ");
    scanf("%d",&val);
    for(i=0;i<n;i++)
        if(a[i]==val)
    break;
    if(i<n)
    {
        printf("Element is present is at index %d position in an array ",i+1);
    }
    else
    {
        printf("Element is not present");
    }
    return 0;
}
