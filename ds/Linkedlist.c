#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

void createList(int n);
void insertAtStart(int x);
void insertAtEnd(int x);
void insertAtPos(int x, int pos);
int countNodes();
void deleteNodeFromStart();
void deleteNodeFromEnd();
void deleteNodeAtPos(int pos);
void print();

struct Node* head,*temp,*newNode;

int main() {
    head = NULL;
    int n;
    printf("Enter the no of elements");
    scanf("%d",&n);
    createList(n);
}

//Creating list
void createList(int n) {
    printf("Enter the data for the linked list");
    for(int i=0;i<n;i++) {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
            temp = head;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }
    print();
}

//insertion at Start
void insertAtStart(int x) {
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    if(head == NULL) {
        head = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
    print();
}

//Insertion at End
void insertAtEnd(int x) {
    if(head == NULL) {
        insertAtStart(x);
    }
    else {
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data = x;
        newNode->next = NULL;
        temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Printing ll
void print() {
    temp = head;
    while(temp != NULL) {
        printf("%d",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

//Counting no of nodes in the ll
int countNodes() {
    int count = 0;
    temp = head;
    while(temp != NULL) {
        temp = temp->next;
        count++;
    }
    return count;
}

//Inserting at Particular Position
void insertAtPos(int x,int pos) {
    int count = countNodes();
    if(pos > count) {
        printf("Invalid position");
    }
    else {
        int i;
        newNode = (struct Node*)malloc(sizeof(struct Node));
        newNode->data;
        temp = head;
        while(i<pos) {
            temp = temp->next;
            i++;
        }
        newNode->next = temp->next;
        temp->next = newNode;
    }
    print();
}

//delete Node from start
void deleteNodeFromStart() {
    if(head == NULL) {
        printf("The ll is empty");
    }
    else {
        temp = head;
        head = head->next;
        free(temp);
    }
    print();
}

//delete Node from end
void deleteNodeFromEnd() {
    temp = head;
    struct Node* prevNode;
    while(temp->next != NULL) {
        temp = prevNode;
        temp = temp->next;
    }
    if(temp == head) {
        head = NULL;
        free(temp);
    }
    else {
        prevNode->next = NULL;
        free(temp);
    }
    free(temp);
    print();
}

