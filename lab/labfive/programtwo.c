#include <stdio.h>
#include <stdlib.h>
struct Node
{
    struct Node *left, *right;
    int data;
};

int search(struct Node *root, int x);

struct Node *newNode(int x);
struct Node *insertElement(struct Node *root, int x);

struct Node *find(struct Node *root, int data)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (root->data == data)
    {
        return root;
    }
    else if (root->data < data)
    {
        return find(root->right, data);
    }
    else
    {
        return find(root->left, data);
    }
}

int main()
{
    struct Node *root = NULL;
    root = insertElement(root, 6);
    root = insertElement(root, 4);
    root = insertElement(root, 3);
    root = insertElement(root, 7);

    printf("Enter the data element to search: ");
    int num;
    scanf("%d", &num);
    int t = search(root, num);
    if (t)
    {
        printf("Element found.\n");
    }
    else
    {
        printf("Element not found.\n");
    }
    return 0;
}
struct Node *newNode(int x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->left = NULL;
    t->right = NULL;
    return t;
}
int search(struct Node *root, int x)
{
    if (root == NULL)
    {
        return 0;
    }
    else if (root->data == x)
    {
        return 1;
    }
    else if (x <= root->data)
    {
        return search(root->left, x);
    }
    else
    {
        return search(root->right, x);
    }
}

struct Node *insertElement(struct Node *root, int x)
{
    if (root == NULL)
    {
        root = newNode(x);
    }
    else if (x <= root->data)
    {
        root->left = insertElement(root->left, x);
    }
    else
    {
        root->right = insertElement(root->right, x);
    }
    return root;
}