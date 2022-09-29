#include<stdio.h>
int main()
{
    int p[5][5],q[5][5],r[5][5],i,j,m,n;
    scanf("%d %d",&m,&n);
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d",(*(p+i)+j));
        }
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
            scanf("%d",(*(q+i)+j));
    }
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            *(*(r+i)+j)=*(*(p+i)+j)+*(*(q+i)+j);
            printf("%d ",*(*(r+i)+j));
        }
        printf("\n");
    }
    return 0;
}
