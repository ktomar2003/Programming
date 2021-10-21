#include<stdio.h>

int main()
{
    int a,b,c;
    printf("Enter two nos:");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping: %d  %d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping: %d  %d",a,b);
    
    return 0;
}