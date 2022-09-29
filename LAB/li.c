#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,c,i,j,*ptr,m;
    scanf("%d %d",&r,&c);
    ptr = (int*)malloc(r*c*sizeof(int));
    for(i=0;i<r;++i)
    {
        for(j=0;j<c;++j)
        {
            scanf("%d",&m);
             *(ptr+i*c+j)=m;
        }
    }
    for(i=0;i<c;++i)
    {
        for(j=0;j<r;++j)
        {
             printf("%d ",*(ptr+j*c+i));
        }
        printf("\n");
   }
   return 0;
}
