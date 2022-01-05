#include<stdio.h>
int main()
{
    int zero=0,one=1,two=2,three=3,four=4,five=5,six=6,seven=7,eight=8,nine=9,ten=10;
    printf("%d %d  %d  %d  %d  %d  %d  %d  %d  %d  %d\n",ten,nine,eight,seven,six,five,four,three,two,one,zero);
    printf("   %d %d  %d  %d  %d  %d  %d  %d  %d\n",ten,nine,eight,seven,five,three,two,one,zero);
    printf("      %d %d  %d  %d  %d  %d  %d\n",ten,nine,eight,five,two,one,zero);
    printf("         %d %d  %d  %d  %d\n",ten,nine,five,one,zero);
    printf("            %d %d  %d\n",ten,five,zero);
    printf("               %d\n",five);
    printf("            %d  %d %d\n",zero,five,ten);
    printf("         %d  %d  %d  %d %d\n",zero,one,five,nine,ten);
    printf("      %d  %d  %d  %d  %d  %d %d\n",zero,one,two,five,eight,nine,ten);
    printf("   %d  %d  %d  %d  %d  %d  %d  %d %d\n",zero,one,two,three,five,seven,eight,nine,ten);
    printf("%d  %d  %d  %d  %d  %d  %d  %d  %d  %d %d\n",zero,one,two,three,four,five,six,seven,eight,nine,ten);
return 0;
}
