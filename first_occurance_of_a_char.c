#include <stdio.h>
#include <string.h>

int main(void) {
        char s[100];
        gets(s);
        char c;
        int i;
        scanf("%c",&c);
        int flag=0;
        for(i=0;i<strlen(s);i++) {
            if (s[i]==c) {
                flag=1;
                break;
            }
        }
        if (flag==1)
            printf("%c found at the position %d",c,i+1);
        else
            printf("%c not found even once in the provided string",c);
	return 0;
}
