#include<stdio.h>
int main()
{
    char a,b;
    scanf("%c %c",&a,&b);
    int m=(int)(a);
    int n=(int)(b);
    if (n>=m)
    {
        for(int i=m; i<=n; i++)
            printf("%c ",(char)(i));
    }
    else
    {
        for (int i=m; i<=90; i++)
            printf("%c ",(char)(i));
        for (int i=65; i<=n; i++)
            printf("%c ",(char)(i));
    }
    return 0;
}
