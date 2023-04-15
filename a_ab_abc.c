#include <stdio.h>

int main()
{
    char a='D';
    for(char i='A';i<'D';i++) {
        for(char j='A';j<i+1;j++) {
            printf("%c ",j);
        }
        printf("\n");
    }
    return 0;
}
