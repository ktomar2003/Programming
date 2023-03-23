#include<stdio.h>

int bino(int n,int k) {
    if (k>n)
        return 0;
    if (k==0 || k==n)
        return 1;
    return bino(n-1,k-1)+bino(n-1,k);
}

int main(void)
{
    int n=5,k=3;
    printf("Value of C(%d,%d) is : %d",n,k,bino(n,k));
    return 0;
}
