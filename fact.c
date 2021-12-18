#include <stdio.h>

int main(void)
{
    int t,n,i;
    scanf("%d",&t);
    while(t--)
    {
        long long int fact=1;
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
            fact*=i;
        }
    printf("%lld\n",fact);
    }
	return 0;
}
