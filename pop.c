#include <stdio.h>
#define MAX 5 
int stack[MAX];
int top = -1;


void pop()
{
    if (top == -1) 
    {
        printf("Stack Underflow! No element to pop\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

int main()
{
    int n, value;

    printf("Enter number of elements to push initially: ");
    scanf("%d", &n);

   
    for (int i = 0; i < n; i++) 
    {
        if (top == MAX - 1)
        {
            printf("Stack Overflow!\n");
            break;
        }
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }

  
    pop();

    return 0;
}

