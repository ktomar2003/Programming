#include <stdio.h>

int main() {
    int n = 5;
    int a[] = {1, 2, 2, 3, 4};
    int uniq[5];
    int uniq_count = 0;
    
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < uniq_count; j++) {
            if (a[i] == uniq[j]) {
                found = 1;
                break;
            }
        }
        if (!found) {
            uniq[uniq_count] = a[i];
            uniq_count++;
        }
    }
    
    for (int i = 0; i < uniq_count; i++) {
        printf("%d ", uniq[i]);
    }
    
    return 0;
}
