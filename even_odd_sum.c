#include <stdio.h>

int main() {
    int n,i,j,sume=0,sumo=0;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
            sume+=a[i];
        else
            sumo+=a[i];
    }
    
    printf("The sum of the even numbers in the array is %d\n",sume);
    printf("The sum of the odd numbers in the array is %d",sumo);
    
    return 0;
}
