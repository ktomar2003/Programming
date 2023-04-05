#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct node
{
	int data;
	struct node *left, *right;
};

typedef struct node * node1;

node1 newNode (int data)
{
	node1 temp = (node1) malloc (sizeof(struct node));
	temp->data = data;
	temp->left = temp->right = NULL;
	return temp;
}

node1 constructTree(int post[], int* postInd,int key, int min, int max, int size)
{
	if (*postInd < 0)
		return NULL;

	node1 root = NULL;

	if (key > min && key < max)
	{
		root = newNode(key);
		*postInd = *postInd - 1;
		if (*postInd >= 0)
		{
            root->right = constructTree(post, postInd, post[*postInd], key, max, size );
            root->left = constructTree(post, postInd, post[*postInd], min, key, size );
		}
	}
	return root;
}

node1 constructBST (int post[], int n)
{
	int postInd = n-1;
	return constructTree (post, &postInd, post[postInd], INT_MIN, INT_MAX, n);
}

void Inorder (node1 node)
{
	if (node != NULL)
	{
	    Inorder(node->left);
	    printf("%d ", node->data);
	    Inorder(node->right);   
	}
}

int main ()
{
	int post[10]; // = {2, 4, 3, 7, 9, 8, 5};
	int n; // = 7;
	printf("Enter the size of BST : ");
	scanf("%d",&n);
	
	printf("Enter %d values in Postorder traversal of the tree : ",n);
	for (int i=0; i<n; i++)
	    scanf("%d",&post[i]);

	struct node *root = constructBST(post, n);

	printf("Inorder traversal of the constructed tree: \n");
	Inorder(root);

	return 0;
}
