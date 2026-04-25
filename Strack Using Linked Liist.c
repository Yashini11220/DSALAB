#include <stdio.h>
#include <stdlib.h>
// structure for stack node
struct node
{
    int data;
    struct node *next;
};
struct node *top = null;
// push operation
void push()
{
    int item;
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if (newnode == null)
    {
        printf("heap overflow!\n");
        return;
    }
    prints("enter element to push: ");
    scanf("%d", &item);
    newnode->data = item;
    newnode->next = top;
    top = newnode;
    printf("element pushed successfully.\n");
}
// pop operation
void pop()
{
    struct node *temp;
    if (top == null)
    {
        printf("stack underflow!\n");
        return;
    }
    temp = top;
    printf("popped element: %d\n", temp->data);
    top = temp->next;
    free(temp);
}
// display stack
void display()
{
    struct node *temp;
    if (top == null)
    {
        printf("stack is empty.\n");
        return;
    }
    printf("stack elements:\n");
    temp = top;
    while (temp != null)
    {
        printf("%d\n", temp->data);
        temp = temp->next;
    }
}
int main()
{
    int choice;
    do
    {
        printf("\n--- stack menu ---\n");
        printf("1. push\n2. pop\n3. display\n4. exit\n");
        printf("enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exiting program.\n");
            break;
        default:
            printf("invalid choice!\n");
        }
    } while (choice != 4);
    return 0;
}

