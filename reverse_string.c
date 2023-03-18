#include <stdio.h>
#include <string.h>

int main(void) {
        char s[100],s1[100];
        scanf("%s",s);
        int i,j=0;
        for (i=strlen(s)-1;i>=0;i--) {
            s1[j]=s[i];
            j++;
        }
        s1[j]='\0';
        printf("%s %s\n",s,s1);
	return 0;
}
