// Trendy no is a 3 digit no and the middle no is divisible by 3

#include<stdio.h>

int main()
{
    int n,rem;
    scanf("%d",&n);
    if(n>99 && n<1000)
    {
        rem = (n % 100) / 10;
        if (rem % 3 == 0)
            printf("Trendy");
        else
            printf("Not Trendy");
    }
    else
        printf("Not Trendy");
}
