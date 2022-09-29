#include <stdio.h>
# define size 10
int main()
{
    int n;
    printf("Enter How many words");
    scanf("%d",&n);
    reverseprint(n);
    return 0;
}
reverseprint(n)
int n;
{
    char word[size];
    if(n<=1)
    {
        scanf("%s",word);
        printf("%s\n",word);
    }
    else
      {
          scanf("%s",word);
          reverseprint(n-1);
          printf("%s\n",word);
      }
 }
