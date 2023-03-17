#include <stdio.h>
#include <string.h>

void printDistinct(char arr[], int n)
{
    for (int i=0; i<n; i++)
    {
        int j;
        for (j=0; j<i; j++)
            if (arr[i] == arr[j])
                break;
        if (i == j)
            printf("%c ",arr[i]);
    }
}

int main()
{
    char c[150],c1[50];
    int i,j=0,n,t=0,pos=0;
    printf("Enter a string : ");
    gets(c);
    printf("\nNon reapeating characters in string : ");
    for(i=0;c[i]!='\0';i++) 
    {
        t=0;
     	for(j=0;c[j];j++) 
     	{
            if(c[i]==c[j])
                t++;
            if(t>1) {
                c1[pos]=c[i];
                pos++;
                break;
            }
        }
        if(t==1) {
            printf("%c ",c[i]);
        }
    }
    printf("\nRepeating characters in string : ");
    int p=strlen(c1);
    printDistinct(c1,p);
    return 0;
}
