#include<stdio.h>
int main(void)
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf(" %d",j);
            }
            printf("\n");
        }
    }
return 0;
}

#include<stdio.h>
int main(void)
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf(" %d",i);
            }
            printf("\n");
        }
    }
return 0;
}

#include<stdio.h>
int main(void)
{
    int n,t;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                printf("*",i);
            }
            printf("\n");
        }
    }
return 0;
}

