#include<stdio.h>
#include<stdlib.h>
int stack[5];
int top =-1;
int x;

void push();
void pop();
void peek();
void display();

void push() {
    printf("Enter data");
    scanf("%d",&x);
    if(top == 4) {
        printf("Overflow");
    }
    else {
        top++;
        stack[top] = x;
    }
    display();
}

void pop() {
    int x;
    if(top == -1) {
        printf("Underflow");
    }
    else {
        x = stack[top];
        top--;
    }
    printf("Popped item is %d",x);
    printf("\n");
    display();
}

//Getting the topmost element
void peek() {
    if(top == -1) {
        printf("Underflow");
    }
    else {
        printf("Topmost element is %d",stack[top]);
    }
}

void display() {
    printf("Current stack is :");
    printf("\n");
    for(int i=0;i<=top;i++){
        printf("%d",stack[i]);
        printf(" ");
    }
    printf("\n");
}

int main() {
    push();
    push();
    push();
    pop();
    peek();
}