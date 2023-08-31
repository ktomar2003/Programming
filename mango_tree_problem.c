#include<stdio.h>

int main()
{
    int r,c,n;
    scanf("%d%d%d",&r,&c,&n);
    if (n <= c || n % c == 1 || n % c == 0) // n % c == 0 for last column
        printf("Yes\n");                    // n % c == 1 for first column
    else                                    // n <= c for first row
        printf("No\n");
}
