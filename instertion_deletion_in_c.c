#include <stdio.h>

int main()
{
    int a[500],n;
    printf("SIZE?");
    scanf("%d",&n);
    
    printf("\nEnter %d elems :",n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("\nBEFORE! ");
    for(int j=0;j<n;j++)
        printf("%d ",a[j]);
    int pos,ele;
    printf("\nPOS?");
    scanf("%d",&pos);
    //printf("\nELE?"); {OPTIONA FOR DELETION}
    //scanf("%d",&ele);
    
    if (pos<=0 || pos>=n)
        printf("Deletion not possible!!");
    else {
        ele=a[pos-1];
        for(int i=pos;i<=n-1;i++)
            a[i-1]=a[i];
        n--;        
    }
    
    /*
    n++;
    for(int i=n-1;i>=pos;i--)
        a[i]=a[i-1];
    a[pos-1]=ele;
    */
    
    printf("\nAFTER! ");
    for(int j=0;j<n;j++)
        printf("%d ",a[j]);
    return 0;
}
