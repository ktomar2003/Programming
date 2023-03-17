#include <stdio.h>
#include <string.h>

int main()
{
    char s[100];
    int i;
    gets(s);
    int vow=0,cons=0;
    for(i=0;s[i]!='\0';i++) {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
            vow++;
        else if  (s[i]==' ' || s[i]=='*' || s[i]=='/' || s[i]=='-' || s[i]=='+' || s[i]=='!' || s[i]=='@' || s[i]=='#' || s[i]=='$' || 
                    s[i]=='%' || s[i]=='^' || s[i]=='&' || s[i]=='=' || s[i]=='{' || s[i]=='}' || s[i]=='[' || s[i]==']' || s[i]=='(' || 
                        s[i]==')' || s[i]==':' || s[i]==';' || s[i]=='\'' || s[i]=='\"' || s[i]=='/' || s[i]=='?' || s[i]=='<' || s[i]=='>' || s[i]=='.'
                            || s[i]==',')
            continue;
        else
            cons++;
    }
    printf("%d %d",vow,cons);
    return 0;
}
