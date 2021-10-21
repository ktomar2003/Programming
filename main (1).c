#include <stdio.h>
#include<string.h>
struct student
{
          char name[10];
          char USN[10];
          int marks[6];
          int total;
          char grad[10];
          int avg;
}s[10];
void main()
{
            int n,i,j;
            printf("Enter number of students\n");
            scanf("%d",&n);
            printf("Enter the details of the students\n");
            for(i=0;i<n;i++)
            {
                     printf("Enter the name of the student\n");
                     scanf("%s",s[i].name);
                     printf("Enter the USN of the student\n");
                     scanf("%s",s[i].USN);
                     printf("Enter the six marks of the stujdent\n");
                    for(j=0;j<6;j++)
                    {
                            scanf("%d",&s[i].marks[j]);
                    }
            }
            for(i=0;i<n;i++)
            {
                     s[i].total=0;
                     for(j=0;j<6;j++)
                     {
                     s[i].total=s[i].total+s[i].marks[j];
                     }
                    s[i].avg=s[i].total/6;
                    if(s[i].avg<35)
                            strcpy(s[i].grad,"F");
                    else if(s[i].avg<60)
                            strcpy(s[i].grad,"P");
                    else if(s[i].avg<75)
                            strcpy(s[i].grad,"sc");
                    else if(s[i].avg<85)
                            strcpy(s[i].grad,"FC");
                    else 
                            strcpy(s[i].grad,"FCD");
            }
            printf("Name\t USN\t Total\t avg\t Grad\t\n");
            for(i=0;i<n;i++)
            {
                printf("%s\t%s\t%d\t%d\t%s\n",s[i].name,s[i].USN,s[i].total,s[i].avg,s[i].grad);
            }
            
}
