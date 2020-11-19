#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node* next; //Next points to node which is of struct Node type
};

int main() {
    int n;
    printf("Enter the no of elements");
    scanf("%d",&n);

    struct Node* head = NULL;
    struct Node* newNode;
    struct Node* temp;


    for(int i=0;i<n;i++) {
        
        newNode = (struct Node*)malloc(sizeof(struct Node));
        
        printf("Enter data");
        scanf("%d",&newNode->data);

        newNode->next = NULL;   

        if(head == NULL){
            head = newNode;
            temp = newNode;
        }
        else {
            temp->next = newNode;
            temp = newNode;
        }
    }

    //Printing the linked list

    temp = head;
    while(temp != NULL) {
        printf("%d",temp->data);
        printf("\n");
        temp= temp->next;
    }

    return 0;
}