#include <stdio.h>
#include <string.h>

int main()
{
    int a[10]={60,30,80,90,50,100,20,10,40,70};
    for (int i=0;i<9;i++) {
        for(int j=0;j<10-i-1;j++) {
            if (a[j]>a[j+1]) {  // '<' for descending order
                a[j]=a[j]^a[j+1];
                a[j+1]=a[j]^a[j+1];
                a[j]=a[j]^a[j+1];
            }
        }
    }
    for(int k=0;k<10;k++) {
        printf("%d ",a[k]);
    }
    return 0;
}
