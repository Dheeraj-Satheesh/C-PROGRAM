#include<stdio.h>
union student{
    char reg[50];
    char name[50];
    char dept[50];
    struct dateofbirth
    {
        int day;
        int month;
        int year;
    }dob;
}p[20];

int main(){
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%s %s %s %d %d %d", p[i].reg, p[i].name, p[i].dept, &p[i].dob.day, &p[i].dob.month, &p[i].dob.year);
    }

    for(int i=0; i<n; i++){
        if((p[i].dob.day>1)&&(p[i].dob.month>1)&&(p[i].dob.year>=2005))
        {
            printf("%d %d %d\n", p[i].dob.day, p[i].dob.month, p[i].dob.year);
        }
    }
    return 0;
}
