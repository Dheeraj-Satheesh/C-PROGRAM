#include<stdio.h>
#define MAX 5
int Q[MAX];
int front,rear;
int main()
{

}
void enqueue(int num)
{
    if(rear==MAX-1)
    {
        printf("QUEUE IS OVERFLOW");
    }
    else if(front==-1 && rear==-1)
    {
        front=0;
        rear=0;
        Q[rear]=num;
    }
    else
    {
        rear++;
        Q[rear]=num;
    }
}
