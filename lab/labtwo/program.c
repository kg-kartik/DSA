#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};

void createList();
void insertAtPos();
int countNodes();
void deleteNodeAtPos();
void print();
void search();

struct Node *head, *temp, *newNode, *nextNode;

int main()
{
    head = NULL;
    printf("Enter 1 for creating list\n");
    printf("Enter 2 for inserting an element \n");
    printf("Enter 3 for deleting an element\n");
    printf("Enter 4 for searching an element \n");
    printf("Enter 5 for printing the list\n");
    printf("Enter 6 for finding the middle element\n");
    printf("Enter 7 for exiting\n");

    int ch, stop = 0;

    do
    {

        printf("Enter your choice");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createList();
            break;
        case 2:
            insertAtPos();
            break;
        case 3:
            deleteNodeAtPos();
            break;
        case 4:
            search();
            break;
        case 5:
            print();
            break;
        case 6:
            print();
            break;
        case 7:
            stop = 1;
            break;
        default:
            printf("Invalid entry");
        }
        if (stop == 1)
        {
            break;
        }

    } while (stop != 1);
}

//Creating list
void createList()
{
    int n;
    printf("Enter the no of elements");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->next = NULL;
        printf("Enter data for the node");
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
}

// Printing ll
void print()
{
    temp = head;
    printf("The current list is : ");
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//linear search
void search()
{
    int x;
    printf("Enter element to search");
    scanf("%d", &x);
    temp = head;
    int flag = 0;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            flag = 1;
            printf("Element found");
            break;
        }
        temp = temp->next;
    }
    if (flag == 0)
    {
        printf("Element not found");
    }
}

//Counting no of nodes in the ll
int countNodes()
{
    int count = 0;
    temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}

//Inserting at Particular Position
void insertAtPos()
{
    int x, pos;
    printf("Enter position you want to insert the element at");
    scanf("%d", &pos);
    printf("Enter the element ");
    scanf("%d", &x);

    int count = countNodes();
    if (pos > count)
    {
        printf("Invalid position");
    }
    else
    {
        int i;
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data;
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
}

//Deleting node at given position
void deleteNodeAtPos()
{
    int pos;
    printf("Enter position you want to delete the element at");
    scanf("%d", &pos);
    if (head == NULL)
    {
        printf("List is empty, enter data to delete!");
    }
    else
    {
        int i = 1;
        temp = head;
        while (i < pos - 1)
        {
            temp = temp->next;
            i++;
        }
        nextNode = temp->next;
        temp->next = newNode->next;
        free(nextNode);
    }
}