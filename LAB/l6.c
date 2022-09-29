#include <stdio.h>
#include <stdlib.h>
#define MAX 40
struct product{
    int pId;
    char pname[MAX];
    char place[MAX];
    int priceperitem;
};
int main()
{
    struct product p[5];
    for(int i=0; i<5; i++){
        scanf("%d %s %s %d", &p[i].pId, p[i].pname, p[i].place, &p[i].priceperitem);
    }
    for(int i=0; i<5; i++){
        if(p[i].priceperitem>150)
        {
            printf("%d %s %s %d\n", p[i].pId, p[i].pname, p[i].place, p[i].priceperitem);
        }
    }
    return 0;
}
