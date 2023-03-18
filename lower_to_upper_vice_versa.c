#include <stdio.h>
#include <string.h>
/*
int main(void) {
    char c;
    scanf("%c",&c);
    for(char i='a';i<='z';i++) {
        if (c==i) {
            c-=32;
            printf("%c",c);
            return 0;
        }
    }
    printf("Only Lowercase alphabets allowed!!!");
    return 0;
}
*/
int main(void) {
    char c;
    scanf("%c",&c);
    for(char i='A';i<='Z';i++) {
        if (c==i) {
            c+=32;
            printf("%c",c);
            return 0;
        }
    }
    printf("Only Uppercase alphabets allowed!!!");
    return 0;
}
