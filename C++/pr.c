#include<stdio.h>

int main()
{
int arr[5]={3,5,6,7,9};
int *p = arr;
int i;
for(i=0;i<=4;i++)
    printf("%u %d  %d\n", p+i,*p+i, *(p+i));
   return 0;
}
