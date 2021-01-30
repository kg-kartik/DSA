#include <stdio.h>
#include <stdlib.h>

int queue[5];
int front = -1, rear = -1;

//Queue - Following first in first out principle
//Insertion from rear and deletion from front

void enqueue(int x);
void dequeue();
void display();

void enqueue(int x)
{
    if (rear == 4)
    {
        printf("Overflow");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("Underflow \n");
    }
    else if (front == rear)
    {
        printf("Dequeued element is %d", queue[front]);
        printf("\n");
        front = rear = -1;
    }
    else
    {
        printf("Dequeued element is %d", queue[front]);
        printf("\n");
        front++;
    }
}

void display()
{
    if (front == -1 && rear == -1)
    {
        printf("The queue is empty");
    }
    else
    {
        printf("The queue is : \n");
        for (int i = front; i <= rear; i++)
        {
            printf("%d", queue[i]);
            printf(" ");
        }
    }
    printf("\n");
}

int main()
{

    int stop, data = 0;
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
            printf("Enter element to be inserted in the queue");
            scanf("%d", &data);
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
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