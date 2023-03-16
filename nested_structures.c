#include<stdio.h>

struct stud_addr {
    int street;
    char *state;
    char *city;
    char *country;
};

struct stud_data {
    int stud_id;
    int stud_age;
    char *stud_name;
    struct stud_addr stAddr;
};

int main()
{
    struct stud_data data;
    data.stud_id=1001;
    data.stud_age=19;
    data.stud_name="Kartik";
    data.stAddr.street=5;
    data.stAddr.state="UP";
    data.stAddr.city="Aligarh";
    data.stAddr.country="India";
    
    printf("All details are given below : \n");
    printf("%d %d %s %d %s %s %s",data.stud_id,data.stud_age,data.stud_name,data.stAddr.street,data.stAddr.state,data.stAddr.city,data.stAddr.country);

    return 0;
}
