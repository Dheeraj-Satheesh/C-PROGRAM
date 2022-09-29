#include<stdio.h>
int main()
{
    int m,n,i,j,ptr[100][100];
    scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
             scanf("%d",(*(ptr+i)+j));
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
             printf("%d ",*(*(ptr+j)+i));
        }
        printf("\n");
    }
    return 0;
}
