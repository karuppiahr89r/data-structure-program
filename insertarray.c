#include<stdio.h>
int main()
{
    struct node
    {
        int data;
        struct node* next;
    };
    struct node *head , *temp, *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    printf("Enter data for the new node: ");
    scanf("%d",&newnode->data);
    newnode->next = head;
    head = newnode;
    return 0;
}