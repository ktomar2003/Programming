#include <stdio.h>

int f(int n) {
    int f[n+2];
    f[0]=0;
    f[1]=1;
    for(int i=2;i<=n;i++)
        f[i]=f[i-1]+f[n-2];
    return f[n];
}

int main(void) {
    int n = 5;
    
    printf("Fibbonacci of %d: " , n);
	
    for(int i=0;i<n;i++)
      printf("%d ",f(i));            
   return 0;
}
