#include <stdio.h>

int main() {
    int n,i,j,pos,ele;
    
    scanf("%d",&n);
    
    int a[n];
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    scanf("%d%d",&pos,&ele);
    
    if (pos<=0 || pos>=n)
        printf("Insertion not possible!!");
        
    else 
    {
        n++;
        for(int i=n-1;i>=pos;i--)
            a[i]=a[i-1];
        a[pos-1]=ele;     
    }
    
    printf("\nArray after insertion : ")
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
    
    return 0;
}
