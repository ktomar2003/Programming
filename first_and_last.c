#include<stdio.h>

int main()
{
    int n,dig,first,last;
    scanf("%d",&n);
    if(n>999 && n<10000)
    {
        first=n%10;
        while(n>0)
        {
            dig=n%10;
            n=n/10;
        }
        last=dig;
        printf("%d",first+last);
    }
    else
    {
        printf("Invalid");
    }
}
