#include <stdio.h>
#include <string.h>

int main(void) {
    char s[100];
    int flag=0;
    scanf("%s",s);
    int i,j=strlen(s)-1;
    for (i=0;i<(strlen(s)/2);i++,j--) {
        if (s[j]!=s[i]) {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
