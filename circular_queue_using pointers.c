// Still concept is blurry, the program is not completely correct (Please look into it)
#include <stdio.h>
#define MAX 5

struct CQUEUE
{
    int front,rear;
    int items[MAX];
};

typedef struct CQUEUE CQu;

int iscqueuefull(CQu *cq)
{
    if(cq->front==(cq->rear+1)%MAX)
        return 1;
    return 0;
}

int iscqueueempty(CQu *cq)
{
    if(cq->rear<cq->front)
        return 1;
    return 0;
}

void insertcqueue(CQu *cq, int ele)
{
    cq->rear=(cq->rear+1)%MAX;
    cq->items[cq->rear]=ele;
}

int deletecqueue(CQu *cq)
{
    int ele;
    cq->front=(cq->front+1)%MAX;
    ele=cq->items[cq->front];
    return ele;
}

void displaycqueue(CQu *cq)
{
    printf("front -> ");
    for(int i=(cq->front+1)%MAX;i!=cq->rear;i=(i+1)%MAX)
        printf("%d ",cq->items[i]);
    printf("<-rear\n");
}

int main()
{
    CQu cq;
    cq.front=cq.rear=-1;
    int ele;
    if (iscqueuefull(&cq))
        printf("CQueue is full !!!");
    else{
        insertcqueue(&cq,5);
        insertcqueue(&cq,6);
        insertcqueue(&cq,7);
        insertcqueue(&cq,8);
        insertcqueue(&cq,9);
    }
    if (iscqueueempty(&cq))
        printf("CQueue is Empty !!!");
    else
    {
        ele=deletecqueue(&cq);
        printf("Removed ele = %d\n",ele);
        ele=deletecqueue(&cq);
        printf("Removed ele = %d\n",ele);
    }
    displaycqueue(&cq);
    
    return 0;
}
