#include <stdio.h>

int sum(int[], int);

int main() {
    int n1,n2,i,sum1,sum2;
    scanf("%d%d",&n1,&n2);
    int a[n1],b[n2];
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        sum1+=a[i];
    }
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        sum2+=b[i];
    }
    if (n1==n2 && sum1==sum2)
    {
        printf("Same\n");
    }
    else
    {
        printf("Not Same\n");
    }
    return 0;
}
