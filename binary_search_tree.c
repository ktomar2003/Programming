#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node* nodep;

nodep new(int data)
{
    nodep node = (nodep) malloc (sizeof(struct node));
    node->data=data;
    node->left=NULL;
    node->right=NULL;
    return node;
}

void inorder (nodep ptr)
{
    if(ptr!=NULL)
    {
        inorder(ptr->left);
        printf("%d ",ptr->data);
        inorder(ptr->right);
    }
}

void preorder (nodep ptr)
{
    if(ptr!=NULL)
    {
        printf("%d ",ptr->data);
        preorder(ptr->left);
        preorder(ptr->right);
    }
}

void postorder (nodep ptr)
{
    if(ptr!=NULL)
    {
        postorder(ptr->left);
        postorder(ptr->right);
        printf("%d ",ptr->data);
    }
}

nodep insert(nodep node, int ele)
{
    if(node == NULL)
    {
        nodep temp = (nodep) malloc (sizeof(struct node));
        temp->data=ele;
        temp->left=NULL;
        temp->right=NULL;
        node=temp;
    }
    else
    {
        if (node->data == ele)
        {
            printf("Duplicate items are not allowed\n");
            return node;
        }
        else if (node->data < ele)
            node->right = insert(node->right,ele);
        else if (node->data > ele)
            node->left = insert(node->left,ele);
    }
    return node;
}


int main() {
    int n, data;
    nodep root = NULL;

    printf("Enter the number of elements to insert in the BST: ");
    scanf("%d", &n);

    printf("Enter the elements to insert in the BST: \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &data);
        root = insert(root, data);
    }

    printf("\nInorder traversal of the BST: ");
    inorder(root);

    printf("\nPreorder traversal of the BST: ");
    preorder(root);

    printf("\nPostorder traversal of the BST: ");
    postorder(root);

    return 0;
}
