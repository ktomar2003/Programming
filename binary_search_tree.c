#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};

int c=0;

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
        if (ptr -> left == NULL && ptr -> right == NULL)
            c++;
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

int tree_h(nodep root) {
    if (!root)
        return 0;
    else {
        int left_h = tree_h(root->left);
        int right_h = tree_h(root->right);
        if (left_h >= right_h)
            return left_h + 1;
        else
            return right_h + 1;
    }
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

    printf("\nNo. of nodes : %d\n",n);
    printf("\nNo. of leaf node : %d\n",c);

    int ht=tree_h(root);
    printf("\nHeight of the tree is : %d ",ht);
    
    return 0;
}
