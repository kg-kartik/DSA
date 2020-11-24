#include<stdio.h>
#include<stdlib.h>

int queue[5];

int front=-1,rear =-1;

void enqueue(int x);
void dequeue();
void display();

void enqueue(int x) {
    if(front == -1 && rear == -1) {
        front = rear = 0;
        queue[rear] = x;
    }
    else if((rear+1)%5 == front) {
        printf("Queue is full \n");
    }
    else {
        rear = (rear+1)%5;
        queue[rear] = x;
    }
    display();
}

void dequeue() {
    if(front == -1 && rear == -1) {
        printf("Underflow \n");
    }
    else if(front == rear) {
        printf("Dequeued element is %d \n",queue[front]);
        front = rear = -1;
    }
    else {
        printf("Dequeued element is %d \n",queue[front]);
        front = (front +1)%5;       
    }
    display();
 }

void display() {
    printf("The current queue is : ");
    int i = front;
    if(front == -1 && rear == -1) {
        printf("The queue is empty");
    }
    else {
        while(i != rear) {
            printf("%d ",queue[i]);
            i = (i+1)%5;
        }
        printf("\n");
    }
}

int main() {
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    dequeue();
    enqueue(6);
}