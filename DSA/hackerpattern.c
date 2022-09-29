#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
   int n,m;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    m=(n*2)-1;
    int num[m][m];
    int a=0,b=m;
    for(int v=0;v<m;v++)
    {
        for(int j=0;j<m;j++)
        {
            num[v][j]=0;
        }
    }
    int ram=n;
    for(int i=0;i<ram;i++)
    {
        for(int z=a;z<b;z++)
        {
            num[a][z]=n;
            num[b-1][z]=n;
            num[z][a]=n;
            num[z][b-1]=n;
        }
        a++;
        b--;
        n--;
        //printf("a:%d\nb:%d\ni:%d\n",a,b,i);
    }
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%d ",num[i][j]);
        }
        printf("\n");
    }
    return 0;
}
