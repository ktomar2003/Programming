#include<stdio.h>

struct dist {
    float feets;
    float inches;
}d1,d2;

int main()
{
    printf("Enter feets 1 : ");
    scanf("%f",&d1.feets);
    printf("Enter inches 1 : ");
    scanf("%f",&d1.inches);
    
    printf("Enter feets 2 : ");
    scanf("%f",&d2.feets);
    printf("Enter inches 2 : ");
    scanf("%f",&d2.inches);
    
    float total_feets,total_inches;
    
    total_inches=d1.inches+d2.inches;
    total_feets=d1.feets+d2.feets;
    
    if (total_inches>=12) {
        total_feets++;
        total_inches-=12;
    }
    
    printf("Total distance is : %.2f feets and %.2f inches",total_feets,total_inches);
    return 0;
}
