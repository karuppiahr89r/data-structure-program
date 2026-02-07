#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// push operation
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack Overflow\n");
    } else {
        top++;
        stack[top] = value;
    }
}

// pop operation
int pop() {
    if (top == -1) {
        printf("Stack Underflow\n");
        return -1;
    } else {
        return stack[top--];
    }
}

int main() {
    int decimal, remainder;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    // convert decimal to binary
    while (decimal > 0) {
        remainder = decimal % 2;
        push(remainder);
        decimal = decimal / 2;
    }

    printf("Binary number: ");
    while (top != -1) {
        printf("%d", pop());
    }

    return 0;
}
