#include <stdio.h>
#define MAX 5   // Maximum size of stack

int stack[MAX];
int top = -1;

// Function to pop an element from stack
void pop() {
    if (top == -1) {
        printf("Stack Underflow! No element to pop\n");
    } else {
        printf("Popped element: %d\n", stack[top]);
        top--;
    }
}

int main() {
    int n, value;

    printf("Enter number of elements to push initially: ");
    scanf("%d", &n);

    // Push elements initially (for pop operation)
    for (int i = 0; i < n; i++) {
        if (top == MAX - 1) {
            printf("Stack Overflow!\n");
            break;
        }
        printf("Enter element %d: ", i + 1);
        scanf("%d", &value);
        top++;
        stack[top] = value;
    }

    // Perform pop operation
    pop();

    return 0;
}
