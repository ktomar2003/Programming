#include <stdio.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    int uniq[n];
    int uniq_count = 1;
    
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    
    uniq[0]=a[0];
    
    for (i = 1; i < n; i++) {
        for (j = 0; j < i; j++) {
            if (a[i] == a[j]) {
                break;
            }
        }
        if (i == j) {
            uniq[uniq_count] = a[i];
            uniq_count++;
        }
    }
    for (int i = 0; i < uniq_count; i++)
        printf("%d ", uniq[i]);
    return 0;
}
