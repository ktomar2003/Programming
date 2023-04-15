#include <stdio.h>

int main()
{
    int a=5,b=5,c=5,d=5,p,q,r,s;
    p = a++ + a++;
    q = ++b + ++b;
    r = c++ + ++c;
    s = ++d + d++;
    printf("%d %d %d %d\n",a,b,c,d);
    printf("%d %d %d %d",p,q,r,s);
    return 0;
}
