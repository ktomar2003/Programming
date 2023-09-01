#include <stdio.h>

int main() {
    int n,i,j,c=0;
    scanf("%d",&n);
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<i;j++)
        {
            if(a[i]==a[j])
                break;
        }
        if(i==j)
            c++;
    }
    printf("There are %d distinct element in the array.",c);
    return 0;
}
