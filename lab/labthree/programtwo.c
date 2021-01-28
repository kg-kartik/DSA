#include <stdio.h>
#include <stdlib.h>

void push(int x);
void pop();
void peek();
void display();

struct Node
{
    int data;
    struct Node *next;
};

struct Node *top = NULL, *newNode, *temp;

void push(int x)
{
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = top;
    top = newNode;
    display();
}

void display()
{
    temp = top;
    printf("The current stack is :");
    if (top == NULL)
    {
        printf("The stack is empty");
    }
    else
    {
        while (temp != NULL)
        {
            printf("%d", temp->data);
            printf(" ");
            temp = temp->next;
        }
    }
    printf("\n");
}

void peek()
{
    if (top == NULL)
    {
        printf("the stack is empty \n");
    }
    else
    {
        printf("The topmost elemnent is %d \n", top->data);
    }
}

void pop()
{
    temp = top;
    if (top == NULL)
    {
        printf("Underflow \n");
    }
    else
    {
        printf("The popped element is %d \n", top->data);
        top = top->next;
        free(temp);
    }
    display();
}

int main()
{
    push(5);
    push(6);
    pop();
    peek();
    pop();
    pop();
}