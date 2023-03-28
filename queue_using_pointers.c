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
    int item=++q->rear;
    q->items[item]=ele;
}

int deletequeue(Qu *q)
{
    int ele;
    ele=q->items[q->front];
    q->front++;
    return ele;
}

void displayqueue(Qu *q)
{
    printf("front -> ");
    for(int i=q->front;i<=q->rear;i++)
        printf("%d ",q->items[i]);
    printf("<-rear\n");
}

int main()
{
    Qu q;
    q.front=0;
    q.rear=-1;
    int ele;
    if (isqueuefull(&q))
        printf("Queue is full !!!");
    else{
        insertqueue(&q,5);
        insertqueue(&q,6);
        insertqueue(&q,7);
        insertqueue(&q,8);
    }
    if (isqueueempty(&q))
        printf("Queue is Empty !!!");
    else
    {
        ele=deletequeue(&q);
        printf("Removed ele = %d\n",ele);
        ele=deletequeue(&q);
        printf("Removed ele = %d\n",ele);
    }
    displayqueue(&q);
    
    return 0;
}
