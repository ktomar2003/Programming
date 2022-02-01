#include<stdio.h>
#include<string.h>
#define max 5
#define str_max 20

int stk[max],top=-1;

void push(char ele)
{
    stk[++top]=ele;
}

char pop()
{
    return stk[top--];    
}

int main()
{
    char str[str_max],elem;
    int len;
    printf("Enter the string to be reversed : ");
    gets(str);
    len=strlen(str);
    //printf("%d",len);
    for(int i=0; i<len; i++)
    {
        push(str[i]);
    }
    for(int i=0; i<len; i++)
    {
        elem=pop();
        printf("%c",elem);
    }
    return 0;
}
