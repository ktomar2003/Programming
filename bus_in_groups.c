#include <stdio.h>

int main() {
    int n,i,max,sum=0,bus_c=1;
    scanf("%d%d",&n,&max);
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        if(sum+a[i]>max)
        {
            bus_c++;
            sum=a[i];
        }
        else
        {
            sum+=a[i];
        }
    }
    printf("%d",bus_c);
    return 0;
}
