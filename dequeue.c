#include <stdio.h>
#define MAX 5

int queue[MAX] = {10,20,30,40,50};
int front = 0;
int rear = 4;

void dequeue()
{
    if(front > rear)
        printf("Queue Underflow\n");
    else
    {
        printf("Deleted element = %d\n", queue[front]);
        front++;
    }
}



int main()
{
    dequeue();
    dequeue();
    return 0;
}


