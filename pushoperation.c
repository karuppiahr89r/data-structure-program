#include <stdio.h>
#define MAX 5  
int stack[MAX];
int top = -1;

void push(int value) 
{
    if (top == MAX - 1)
    {
        printf("Stack Overflow! Cannot push %d\n", value);
    } else {
        top++;
        stack[top] = value;
        printf("%d pushed into stack\n", value);
    }
}

int main()
{
    int n, value;

    printf("Enter number of elements to push: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) 
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        push(value);
    }

    return 0;
}

