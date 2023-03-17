#include <stdio.h>
#include <string.h>

int main(void) {
        char c;
        scanf("%c",&c);
        int flag=0;
        char i;
        for(i='a';i<='z';i++) {
            if (i==c) {
                flag++;
                break;
            }
        }
        for(i='A';i<='Z';i++) {
            if (i==c) {
                flag++;
                break;
            }
        }
        if (flag!=0)
            printf("%c is an Alphabet",c);
        else
            printf("%c is not an Alphabet",c);
	return 0;
}
