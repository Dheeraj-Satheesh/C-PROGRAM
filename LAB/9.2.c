#include<stdio.h>
struct account
{
    int accnum;
    char accname[40];
    int balance;
}a[4];
int main()
{
    int n;
    int id,amt,p;
    scanf("%d",&n);
    for (int i=0;i<n;i++)
    {
        scanf("%d %s %d",&a[i].accnum,a[i].accname,&a[i].balance);
    }
    scanf("%d %d %d",&id,&amt,&p);
    if(p==1){
        for(int  j=0;j<n;j++){
            if (a[j].accnum==id){
                a[j].balance+=amt;
                printf("The balance amount in account is\n");
                printf("%d %s %d",a[j].accnum,a[j].accname,a[j].balance);
                }
        }
    }
    else if(p==0)
    for(int j=0;j<n;j++){
        if(a[j].accnum==id){
            a[j].balance-=amt;
            if (a[j].balance<1000)
                printf("Insufficient Balance operation cannot be done");
            else
                printf("Transaction is permitted");
        }
    }
return 0;
}
