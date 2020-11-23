#include<stdio.h>
#include<stdlib.h>

void enqueue(int x);
void display();
void dequeue();

struct Node {
    int data;
    struct Node *next;
};

struct Node* newNode,*front = NULL,*rear=NULL,*temp;

void enqueue(int x) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->next = NULL;
    newNode->data = x;
    if(front == NULL && rear == NULL) {
        front = newNode;
    }
    else {
        rear->next = newNode;
    }
    rear = newNode;
    display();
}

void display() {
    temp = front;       
    printf("The current queue is");
    if(front == NULL && rear == NULL) {
        printf("The queue is empty");
    }
    else {
        while(temp != NULL) {
            printf("%d",temp->data);
            printf(" ");
            temp = temp->next;
        }
    }
    printf("\n");
}

void dequeue() {
    temp = front;
    if(front == NULL) {
        printf("The queue is empty, Nothing to display \n");
    }
    else if(front == rear) {
        printf("The queue is empty \n");
    }
    else {
        printf("The dequeued element is %d \n",front->data);
        front = front->next;
        free(temp);
        display();
    }
}

int main() {
    enqueue(5);
    enqueue(4);
    dequeue();
    dequeue();   
}