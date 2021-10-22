#include <stdio.h>
#include <math.h>
int main()
{
    int n,digit,cnt=0,n1,n2,sum=0;
    printf("Enter a number:");
    scanf("%d",&n);
    n1=n;
    n2=n1;
    while(n)
    {
        digit=n%10;
        cnt++;
        n/=10;
    }
    //printf("Length=%d",cnt);
    while(n1)
    {
        digit=n1%10;
        sum=sum+pow(digit,cnt);
        n1/=10;
    }
    if(sum==n2)
        printf("%d is an Armstrong number",n2);
    else
        printf("%d is not an Armstrong number",n2);
    return 0;
}
