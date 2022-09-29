#include<stdio.h>
#include<string.h>
int main(){
    int n;
    scanf("%d",&n);
    char names[20][30];
    for(int i=0;i<n;i++){
        scanf("%s",names[i]);
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(strcmp((names+i),(names+j))>0){
                char temp[20];
                strcpy(temp,*(names+i));
                strcpy((names+i),(names+j));
                strcpy(*(names+j),temp);
            }
        }
    }
    for (int i=0;i<n;i++){
        printf("%s\n",*(names+i));
    }
    return 0;
}
