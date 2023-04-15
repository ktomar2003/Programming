// Patterns to print right triangles

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

/*
#include <stdio.h>

int main()
{
    int a=5;
    for(int i=1;i<5;i++) {
        for(int j=1;j<i+1;j++) {
            printf("%d ",j);
        }
        printf("\n");
    }
    return 0;
}
*/
