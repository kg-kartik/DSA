//Tree works on the concept of recursive function
//You need to know how memory is allocated while calling recursive functions
//Ig "tail recursive function" is used here from all what i have understood
//Here create function is being called recursively
//Firstly we are allocating memory for the root node in the main function
//And then only data for the respective child is inserted in the node
//Memory for the left child is being allocated by calling create function recursively
//And as soon as the user enters -1 the create function returns null for left child of that node
//Now at each recursive call,local copies for each variables are created in the memory stack
//So after returning left child for the node,statement for right child is executed
//if user enters data it is also called recursively or if -1 then the function returns 0 for right child
//of that node. Also whenever it encounters return statement it goes back to the statement or function call
//which called it in the memory stack.Afer this, return newNode will be executed which will go back to the
//statement in the previous Node function from which it is called, i.e. right child of the previous node
//will point to this node and the following procedure will continue until value for root is returned

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *create()
{
    int x;
    struct Node *newNode;
    newNode = (struct Node *)malloc(sizeof(struct Node));
    printf("Enter data for node (or -1 if node will be empty) \n");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    else
    {
        newNode->data = x;
        printf("Enter left child for %d \n", x);
        newNode->left = create();
        printf("Enter right child for %d \n", x);
        newNode->right = create();
        return newNode;
    }
}

int main()
{
    struct Node *root;
    root = create();
}