#include <stdio.h>

int main() {
    int n,i,j,sume=0,sumo=0;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    printf("Before sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if (a[i]<a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    
    printf("\nAfter sorting : ");
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
