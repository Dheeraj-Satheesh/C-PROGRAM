#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100],c[100],d[100];
    scanf("%s",&a);
    scanf("%s",&b);
    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);
    printf("%s\n",a);
    printf("%s\n",b);

    int i=0,j=0;
    while(*(b+i)!='\0')
    {
        *(d+i)=*(b+i);
        i++;
    }
    while(*(a+j)!='\0')
    {
        *(d+i) = *(a+j);
        i++;
        j++;
    }
    *(d+i) = '\0';
    printf("%s",d);
    return 0;
}
