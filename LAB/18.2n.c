#include<stdio.h>
int stringlen(char*);
int main() {
   char str[100];
   int len;
    scanf("%[^\n]%*c", str);
   len = stringlen(str);
   printf("%d",len);
   return 0;
}
int stringlen(char*p)
{
   int count = 0;
   while (*p != '\0') {
      count++;
      p++;
   }
   return count;
}
