#include <stdio.h>
#define SIZE 10

struct STACK
{
    int top;
    int items[SIZE];
};

typedef struct STACK st;

int isstackfull(st *p)
{
    if(p->top==SIZE-1)
        return 1;
    return 0;
}

int isstackempty(st *p)
{
    if(p->top==-1)
        return 1;
    return 0;
}

void push(st *p, int ele)
{
    p->items[++p->top]=ele;
}

int pop (st *p)
{
    int ele;
    ele=p->items[p->top--];
    return ele;
}

void displaystack(st *p)
{
    for(int i=p->top;i>-1;i--)
        printf("%d",p->items[i]);
}

int main()
{
    st s;
    s.top=-1;
    int ele;
    if (isstackfull(&s))
        printf("Stack is full !!!");
    else
        push(&s,5);
    if (isstackempty(&s))
        printf("Stack is Empty !!!");
    else
    {
        ele=pop(&s);
        printf("Popped ele = %d",ele);
    }
    displaystack(&s);
    
    return 0;
}
