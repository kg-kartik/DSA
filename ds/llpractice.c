#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head, *newNode, *temp;

void createList(int n);
void print();
void insertAtStart(struct Node **head, int data);
void insertAtEnd(struct Node **head, int data);

int main()
{
    head = NULL;
    int n;
    printf("Enter the no of elements");
    scanf("%d", &n);
    createList(n);
    insertAtStart(&head, 5);
    insertAtEnd(&head, 6);
}

void createList(int n)
{
    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->next = NULL;
        printf("Enter data");
        scanf("%d", &newNode->data);
        if (head == NULL)
        {
            head = newNode;
            temp = head;
        }
        else
        {
            temp->next = newNode;
            temp = newNode;
        }
    }
    print();
}

void print()
{
    temp = head;
    printf("The linked list is : \n");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//As we are pushing node to start of the ll, we need to change the head pointer to point to it
//so it will be pointer to struct node which is itself a pointer
void insertAtStart(struct Node **head, int x)
{
    newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = x;
    if (*head == NULL)
    {
        *head = newNode;
    }
    else
    {
        newNode->next = *head;
        *head = newNode;
    }
    print();
}

void insertAtEnd(struct Node **head, int data)
{
    if (*head == NULL)
    {
        insertAtStart(head, data);
    }
    else
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = data;
        newNode->next = NULL;
        temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    print();
}
