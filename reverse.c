#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int main()
{
    char str[MAX];
    int i;

    printf("Enter a string: ");
    scanf("%s", str);

    // Push all characters into stack
    for(i = 0; str[i] != '\0'; i++)
        push(str[i]);

    // Pop characters to reverse string
    for(i = 0; top != -1; i++)
        str[i] = pop();
    printf("Reversed string = %s\n", str);
    return 0;
}
