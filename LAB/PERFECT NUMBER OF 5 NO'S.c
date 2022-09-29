//PERFECT NUMBER OF 5 NUMBERS//
#include<stdio.h>
int main()
{
int i=1,n,s=0;
for(int j=0; j<5; j++){
scanf("%d",&n);

while(i<n)

                {
                            if(n%i==0)
                            s=s+i;
                            i++;
                }
        if(s==n)
            printf("Perfect Number\n");
        else
            printf("Not a Perfect Number\n");
        n=0;
        s=0;
        i=1;
}
return 0;
}
