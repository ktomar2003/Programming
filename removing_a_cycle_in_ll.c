#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node node;

node *createNode(int ele)
{
    node *p;
    p = (node *)malloc(sizeof(node));
    p->data=ele;
    p->next=NULL;
    return p;
}

void insert(node **head, int ele)
{
    node *p;
    p=createNode(ele);
    *head=p;
    p=p->next;
    p->next=*head;
}

void delete(node **head)
{
    node *p;
    p=*head;
    while (p->next!=NULL)
        p=p->next;
    p->next=NULL;
}

int main(void)
{
    node *head=NULL;
    int ele=80,ele1=70,ele2=60;
    
    insert(&head,ele);
    insert(&head,ele1);
    insert(&head,ele2);
    
    delete(&head);
    
    return 0;
}
