#include <stdio.h>
#include <string.h>

int main(void) {
        int a[10]={10,20,30,40,50,60,70,80,90,100};
        int temp,flag=0,i;
        scanf("%d",&temp);
        for(i=0;i<10;i++) {
            if (a[i]==temp) {
                flag++;
                break;
            }
        }
        if (flag==1)
            printf("%d found at position %d",temp,i+1);  
        else
            printf("%d is not found",temp);
	return 0;
}
