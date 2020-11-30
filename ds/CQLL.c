#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Node* front = NULL,*rear=NULL,*newNode,*temp;

void enqueue(int x);
void dequeue();
void display();

void enqueue(int x) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    
    //While enqueuing,rule to be followed is that last node or the node to be enqueued(rear) should point
    // to front because of the fact that it is circular queue and the last node will point to first node

    if(front == NULL && rear == NULL) {
        front = newNode;
        rear = newNode;
        rear->next = newNode; //Will point to itself as it is the only node
    }
    else {
        rear->next = newNode;
        rear = newNode;
        rear->next = front;
    }
    display();
}

void dequeue() {
    temp = front;
    if(front == NULL && rear == NULL) {
        printf("Nothing to delete \n");
    }
    else if(front == rear) {
        front = NULL;
        rear = NULL;
        free(temp);
    }
    else {
        front = front->next;
        rear->next = front;
        free(temp);
    }
    display();
}

void display() {
    temp = front;
    if(front == NULL && rear == NULL) {
        printf("Queue is empty \n");
    }
    else {
        printf("Queue is : ");
        while (temp->next != front) {
            printf("%d ",temp->data);
            temp = temp->next;
        }
        printf("%d",temp->data);
        printf("\n");
    }
}

int main(){
    enqueue(5);
    enqueue(4);
    dequeue();
    dequeue();
    dequeue();
}