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
    // if(sum)
        // bus_c++;   # Only write this condition while taking bus_c = 0
        //            # If bus_c is initialised to 1 no need of this condition as it'll not consider the last bus
    printf("%d",bus_c);
    return 0;
}
