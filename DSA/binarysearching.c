#include <stdio.h>
int binarySearch(int a[], int beg, int end, int val)
{
    int mid;
    if(end >= beg)
    {        mid = (beg + end)/2;
        if(a[mid] == val)
        {
            return mid+1;
        }
        else if(a[mid] < val)
        {
            return binarySearch(a, mid+1, end, val);
        }
        else
        {
            return binarySearch(a, beg, mid-1, val);
        }
    }
    return -1;
}
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
    int res = binarySearch(a, 0, n-1, val);
    if (res == -1)
       printf("\nElement is not present in the array");
    else
       printf("\nElement is present at index %d  position of array", res-1);
    return 0;
}
