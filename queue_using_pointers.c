#include <stdio.h>
#define SIZE 5

struct QUEUE
{
    int front,rear;
    int items[SIZE];
};

typedef struct QUEUE Qu;

int isqueuefull(Qu *q)
{
    if(q->rear==SIZE-1)
        return 1;
    return 0;
}

int isqueueempty(Qu *q)
{
    if(q->rear<q->front)
        return 1;
    return 0;
}

void insertqueue(Qu *q, int ele)
{
    q->items[++q->rear]=ele;
}

int deletequeue(Qu *q)
{
    int ele;
    ele=q->items[q->front++];
    return ele;
}

void displayqueue(Qu *q)
{
    for(int i=q->front;i<=q->rear;i++)
        printf("%d ",q->items[i]);
}

int main()
{
    Qu q;
    q.front=0;
    q.rear=-1;
    int ele;
    if (isqueuefull(&q))
        printf("Queue is full !!!");
    else
        insertqueue(&q,5);
    if (isqueueempty(&q))
        printf("Queue is Empty !!!");
    else
    {
        ele=deletequeue(&q);
        printf("Removed ele = %d\n",ele);
    }
    displayqueue(&q);
    
    return 0;
}
