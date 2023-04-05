#include <stdio.h>
#include <stdlib.h>

struct Node {
	int data;
	struct Node* next;
} Node;

typedef struct Node* node;

node swap(node ptr1, node ptr2)
{
	node tmp = ptr2->next;
	ptr2->next = ptr1;
	ptr1->next = tmp;
	return ptr2;
}

int bubbleSort(node* head, int count)
{
	node* h;
	int i, j, swapped;

	for (i = 0; i <= count; i++) {
		h = head;
		swapped = 0;
		for (j = 0; j < count - i - 1; j++) {
			struct Node* p1 = *h;
			struct Node* p2 = p1->next;
			if (p1->data > p2->data) {
				*h = swap(p1, p2);
				swapped = 1;
			}
			h = &(*h)->next;
		}
		if (swapped == 0)
			break;
	}
}

void printList(struct Node* n)
{
	while (n != NULL) {
		printf("%d -> ", n->data);
		n = n->next;
	}
	printf("\n");
}

void insertAtTheBegin(node* start_ref, int data)
{
	node ptr1 = (node)malloc(sizeof(struct Node));

	ptr1->data = data;
	ptr1->next = *start_ref;
	*start_ref = ptr1;
}

int main()
{
	int a[10]; // = { 10, 50, 40, 30, 20, 60 };
	int n, i;
	
	printf("Enter no of elements to be sorted : ");
	scanf("%d",&n);
	
	printf("Enter %d elements : ",n);
	
	node start = NULL;
	
	for (i = 0; i < n; i++)
	    scanf("%d",&a[i]);
		
	for (i = 0; i < n; i++)
	    insertAtTheBegin(&start, a[i]);

	printf("Linked list before sorting\n");
	printList(start);

	bubbleSort(&start, n);

	printf("Linked list after sorting\n");
	printList(start);

	return 0;
}
