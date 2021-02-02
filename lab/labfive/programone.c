#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *root;

struct Node *create()
{
    int x;
    struct Node *newNode;
    scanf("%d", &x);
    if (x != -1)
    {
        newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = x;
        printf("Enter left child for %d ", x);
        newNode->left = create();
        printf("Enter right child for %d", x);
        newNode->right = create();
        return newNode;
    }
    else
    {
        return NULL;
    }
}

void inorder(struct Node *newNode)
{
    if (newNode == NULL)
    {
        return;
    }
    inorder(newNode->left);
    printf("%d ", newNode->data);
    inorder(newNode->right);
}

int main()
{
    printf("Enter data for node (or -1 if node will be empty) \n");
    root = create();
    inorder(root);
    printf("\n");
}
