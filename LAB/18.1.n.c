#include<stdio.h>
#include<string.h>
int main()
{
    char str1[20];
    char str2[20];
    scanf("%s",str1);
    scanf("%s",str2);
    int i=0;
    while(*(str1+i)!='\0')
        i++;
        *(str1+i)=' ';
    int j=0;
    while(*(str2+j)!='\0')
        *(str1+i)=*(str2+j);
    *(str1+i)='\0';
    printf("%s",str1);
    return 0;
}

