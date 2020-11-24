#include<stdio.h>
#include<stdlib.h>

//Queue follows principle first in first out
//An element will be inserted from rear and will be deleted from front

int queue[5];
int front=-1,rear=-1;

void enqueue(int x);
void dequeue();
void display();

void enqueue(int x) {
    if(rear == 4) {
        printf("Overflow");
    }
    else if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else {
        rear++;
        queue[rear] = x;
    }
    display();
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Underflow \n");
    }
    else if(front == rear) {
        printf("Dequeued element is %d",queue[front]);
        printf("\n");
        front = rear = -1;
    }
    else {
        printf("Dequeued element is %d",queue[front]);
        printf("\n");
        front++;
    }
    display();
}

void display() {
    if(front == -1 && rear ==-1) {
        printf("The queue is empty");
    }
    else {
        printf("The queue is : \n");
        for(int i=front;i<=rear;i++) {
            printf("%d",queue[i]);
            printf(" ");
        }
    }
    printf("\n");
}

int main() {
    enqueue(5);
    enqueue(6);
    dequeue();
    dequeue();
    dequeue();
}