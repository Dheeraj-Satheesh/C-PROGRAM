#include<stdio.h>
int main()
{
    int C,V,ln;
    scanf("%d",&ln);
    if(ln%20==0)
    {
        C=ln/20;
    }
    else
        C=ln/20+1;
    printf("C = %d\n",C);
    V=ln - (C-1)*20;
    if (V==0)
        printf("V = %d",10);
    else
    {
        if(V%2==0)
            printf("V = %d\n",V/2);
        else
            printf("V = %d\n",(V/2)+1);
    }
    if(ln%2==0)
        printf("L = %d\n",2);
    else
        printf("L = %d\n",1);
    return 0;
}
