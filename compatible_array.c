#include <stdio.h>

int main() {
    int n1,n2,i,j;
    
    scanf("%d",&n1);
    
    int a[n1];
    
    for(i=0;i<n1;i++)
        scanf("%d",&a[i]);
    
    scanf("%d",&n2);    
    
    int b[n2];
    
    for(i=0;i<n2;i++)
        scanf("%d",&b[i]);
    int flag=0;
    if(n1==n2)
    {
        for(i=0;i<n1;i++)
            if(a[i]<b[i])
            {
                flag=1;
                break;
            }
        if (flag==1)
            printf("Incompatible");
        else
            printf("Compatible");
    }
    else
    {
        printf("Incompatible");
    }
    return 0;
}
