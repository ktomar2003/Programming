// Program to Plot Pascal's Triangle
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,j,coef=1,space,rows;
        scanf("%d",&rows);
        for(i=0;i<rows;i++)
        {
            for(space=1;space<=rows-i;space++)
                printf(" ");
            for(j=0;j<=i;j++)
            {
                if(j==0||i==0)
                    coef=1;
                else
                    coef=coef*(i-j+1)/j;
                printf("%4d",coef);
            }
        printf("\n");
        }
    }
}

// Program to Print Binomial Coefficient Table
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int val,i,j,num;
        scanf("%d",&val);
        for(i=0;i<=val;i++)
        {
            printf("%2d :",i);
            num=1;
            for(j=0;j<=i;j++)
            {
                if(i!=0&&j!=0)
                    num=num*(i-j+1)/j;
                printf("%4d",num);
            }
        printf("\n");
        }
    }
}
