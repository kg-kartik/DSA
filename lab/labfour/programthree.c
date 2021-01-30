#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    int priority;
    struct node *next;
};

struct node *temp, *start;
// Function to Create A New Node
struct node *newNode(int d, int p)
{
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = d;
    temp->priority = p;
    temp->next = NULL;
    return temp;
}

// Return the value at head
int peek(struct node **head)
{
    return (*head)->data;
}

// Removes the element with the
// highest priority form the list
void pop(struct node **head)
{
    temp = *head;
    (*head) = (*head)->next;
    free(temp);
}

void display(struct node **head)
{
    temp = (*head);
    while (temp != NULL)
    {
        printf("%d", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Function to push according to priority
void push(struct node **head, int d, int p)
{
    start = (*head);

    // Create new Node
    temp = newNode(d, p);

    // Special Case: The head of list has lesser
    // priority than new node. So insert new
    // node before head node and change head node.
    if ((*head)->priority > p)
    {

        // Insert New Node before head
        temp->next = *head;
        (*head) = temp;
    }
    else
    {

        // Traverse the list and find a
        // position to insert new node
        while (start->next != NULL &&
               start->next->priority < p)
        {
            start = start->next;
        }

        // Either at the ends of the list
        // or at required position
        temp->next = start->next;
        start->next = temp;
    }
}

// Function to check is list is empty
int isEmpty(struct node **head)
{
    return (*head) == NULL;
}

// Driver code
int main()
{

    struct node *pq = newNode(2, 1);

    int stop, data, priority = 0;
    printf("Enter 1 for inserting elements in queue \n");
    printf("Enter 2 for deleting items from queue \n");
    printf("Enter 3 for displaying items in queue \n");
    printf("Enter 4 for Exit \n");

    do
    {
        printf("Enter your choice");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter element and priority of the element to be inserted in the queue");
            scanf("%d", &data);
            scanf("%d", &priority);
            push(&pq, data, priority);
            break;
        case 2:
            pop(&pq);
            break;
        case 3:
            display(&pq);
            break;
        case 4:
            stop = 1;
            break;
        default:
            printf("Invalid choice");
            break;
        }
    } while (stop != 1);
}
