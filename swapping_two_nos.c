#include<stdio.h>

int main() {
    int a,b,temp;
    scanf("%d%d",&a,&b);
    printf("Before swapping : %d %d\n",a,b);
    /*a=a+b;
    b=a-b;
    a=a-b;
    
    int *p1=&a;
    int *p2=&b;
    
    *p1=*p1+*p2;
    *p2=*p1-*p2;
    *p1=*p1-*p2;
    
    temp=*p1;
    *p1=*p2;
    *p2=temp;*/
    a=a^b;
    b=a^b;
    a=a^b;
    printf("After swapping : %d %d",a,b);
    return 0;
}
