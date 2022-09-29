#include <string.h>
#include <stdio.h>

char *reverse(char *str)
{
    char *end = str + strlen(str) - !!*str;
    char *wrk = str;

    while(end > wrk)
    {
        char tmp = *wrk;
        *wrk++ = *end;
        *end-- = tmp;
    }
    return str;
}

int main(void)

{
    char strings[3][50];
    for(int x=1;x<=3;x++) {
      scanf("%s",strings[x]);
    }

    for(int y=1;y<=3;y++) {
    printf("%s\n", reverse(strings[y]));
    }
}
