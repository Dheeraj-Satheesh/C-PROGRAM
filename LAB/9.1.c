#include <stdio.h>
typedef struct{
    int accnum;
    char accname[40];
    int balance;
}account;
int main()
{
    int n;
    scanf("%d",&n);
    account arr[100];
    for(int i=0;i<n;i++){
        scanf("%d%s%d",&arr[i].accnum,arr[i].accname,&arr[i].balance);
    }
    for(int i=0;i<n;i++){
        if((arr[i].accname[0]=='A') && (arr[i].balance>10000)){
           printf("%d %s %d\n",arr[i].accnum,arr[i].accname,arr[i].balance);
        }
    }
}
