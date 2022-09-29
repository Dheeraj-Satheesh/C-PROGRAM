#include<stdio.h>
#include <stdlib.h>
struct Time_Diff
{
int hrs[3];int minu[3];int sec[3];
};
int main()
{

struct Time_Diff p1,p2,p3;
scanf("%d %d %d\n",&p1.hrs[1],&p1.minu[1],&p1.sec[1]);
scanf("%d %d %d\n",&p2.hrs[2],&p2.minu[2],&p2.sec[2]);
int var1 = 0,var2 = 0;
var1 = p1.hrs[1]*3600+p1.minu[1]*60 + p1.sec[1];
var2 = p2.hrs[2]*3600+p2.minu[2]*60+p2.sec[2];
if(var1 == var2)
{
        printf("Both the time are equal\n");
}
else if(var1>var2)
{
        int difference = var1-var2;
        p3.hrs[3]= difference/3600;
        difference = difference-p3.hrs[3]*3600;
        p3.minu[3] = difference/60;
        p3.minu[3] = difference/60;
        difference= difference-p3.minu[3]*60;
        p3.sec[3]= difference;
        printf("Computed Time is\n%d:%d:%d\n",p3.hrs[3],p3.minu[3],p3.sec[3]);
}
else if(var1<var2)
{
        int difference = var1-var2;
        p3.hrs[3] = difference/3600;
        difference = difference-p3.hrs[3]*3600;
        p3.minu[3] = difference/60;
        difference = difference-p3.minu[3]*60;
        p3.sec[3]= difference;
        printf("Computed Time is\n%d:%d:%d\n",abs(p3.hrs[3]),abs(p3.minu[3]),abs(p3.sec[3]));
}
return 0;
}
