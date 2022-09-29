#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    char p[30][30];
    for(int i=0;i<n;i++){
        scanf("%s",p[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(strcmp((p+i),(p+j))>0)
           {
                char q[20];
                strcpy(q,*(p+i));
                strcpy((p+i),(p+j));
                strcpy(*(p+j),q);
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s\n",*(p+i));
    }
    return 0;
}

