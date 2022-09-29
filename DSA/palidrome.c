#include<stdio.h>
int main()
{
    int n,r,sum=0,temp;
    printf("Enter an integer: ");
    scanf("%d", &n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if (temp==sum)
    {
        printf("Given integer %d is Palindrome number ",temp);
    }
    else
    {
        printf("Not a palindrome number");
    }
    return 0;
}
