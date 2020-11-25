#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct  Node *next;
    struct Node *prev;
};

struct Node *head=NULL,*newNode,*tail,*temp;
int count=0;

void create(int n);
void display();
void insertAtBeg(int x);
void insertAtPos(int x,int pos);
void insertAtEnd(int x);
int getLength();
void display();
void deleteFromBeg();
void deleteFromPos(int pos);
void deleteFromEnd();
void reverse();

void create(int n) {
    for(int i=0;i<n;i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        printf("Enter data for the node");
        scanf("%d",&newNode->data);
        newNode->next = NULL;
        newNode->prev = NULL;

        if(head == NULL) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    display();
}

void insertAtBeg(int x) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->prev = NULL;
    newNode->data = x;
    if(head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }
    display();
}

void insertAtPos(int x,int pos) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    int count = getLength();
    
    if(pos > count && pos < 1) {
        printf("Invalid position");
    }
    else if(pos == 1) {
        insertAtBeg(x);
    }
    else {
        int i=1;
        temp = head;
        for(i=1;i<pos-1;i++) {
            temp = temp->next;    
        }
        newNode->prev = temp;
        temp->next->prev = newNode;
        newNode->next = temp->next;
        temp->next = newNode;
    }
    display();
}

void insertAtEnd(int x) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = NULL;
    tail->next = newNode;
    newNode->prev =  tail;
    tail = newNode;         
    display();
}

int getLength () {
    temp = head;
    while(temp != NULL) {
        count++;
        temp = temp->next;
    }
    return count; 
}

void display() {
    temp = head;
    printf("The current ll is : ");
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }   
    printf("\n");
}

void deleteFromBeg() {
    temp = head;
    if(head == NULL) {
        printf("The list is empty");
    }
    else {
        head = head->next;
        head->prev = NULL;
        free(temp);
    }
    display();
}

void deleteFromEnd() {
    temp = tail;
    if(tail == NULL) {
        printf("The list is empty");
    }
    else {
        temp->prev->next = NULL;
        tail = tail->prev;
        free(temp);
    }
    display();
}

void deleteFromPos(int pos) {
    int i=1;
    temp = head;
    int count = getLength();
    if(pos> count && count < 1) {
           printf("The list is empty");
    }
    else if(pos == 1) {
        deleteFromBeg();
    }
    else {
        while(i < pos) {
            temp = temp->next;
            i++;
        }
        temp->prev->next = temp->next;
        temp->next->prev = temp->prev;
        free(temp);
    }
}

int main() {
    create(4);
    insertAtBeg(5);
    insertAtEnd(4);   
    insertAtPos(2,3);
    deleteFromBeg();
    deleteFromEnd();
    deleteFromPos(2);
}
 