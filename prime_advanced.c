#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=2;i<n/2;i++)
    {
        if(n % i == 0)
        {
            printf("%d is Composite",n);
            break;
        }
    }
    printf("%d is Prime",n);
	return 0;
}

#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d",&n);
    for(int i=2;i*i<n;i++)
    {
        if(n % i == 0)
        {
            printf("%d is Composite",n);
            break;
        }
    }
    printf("%d is Prime",n);
	return 0;
}
