s=input()
s=s.upper()
usn=list(s)
if usn[3]=='2' and usn[4]=='0':
    print("Your Year of Admission is 2020\n")
elif usn[3]=='1':
    if usn[4]=='9':
        print("Your Year of Admission is 2019\n")
    elif usn[4]=='8':
        print("Your Year of Admission is 2018\n")
    elif usn[4]=='7':
        print("Your Year of Admission is 2017\n")
    elif usn[4]=='6':
        print("Your Year of Admission is 2016\n")
    elif usn[4]=='5':
        print("Your Year of Admission is 2015\n")
    else:
        print("Older Records doesn't exist!!!\nSorry for Inconvenience\n")
else:
    print("Enter a valid USN number\n")
    
if usn[5]=='C' and usn[6]=='S':
    print("Dept of Computer Science\n")
elif usn[5]=='I' and usn[6]=='S':
    print("Dept of Information Science\n")
elif usn[5]=='A' and usn[6]=='I':
    print("Dept of Artificial Intelligence\n")
elif usn[5]=='E' and usn[6]=='C':
    print("Dept of Electronics and Communication\n")
elif usn[5]=='C' and usn[6]=='V':
    print("Dept of Civil Engineering\n")
elif usn[5]=='M' and usn[6]=='E':
    print("Dept of Mechanical Engineering\n")
else:
    print("Enter a valid USN number\n")

if usn[7]=='0' and usn[8]=='0':
    print("Your Roll number is ",usn[9])
elif usn[7]=='0':
    print("Your Roll number is ",usn[8],usn[9])
else:
    print("Your Roll number is ",usn[7],usn[8],usn[9])

   

IN C (NOT EXECUTING)
#include<stdio.h>
#include<string.h>

int main()
{
    int l;
    char s[15],usn[15];
    //scanf("%s",s);
    fgets(s,15,stdin);
    //usn=strupr(s);
    printf("%s",strupr(s));
    /*l=strlen(s);
    //for(int i=0;i<l;i++)
        //scanf("%c",s[i]);
    
    if (s[3]=='2' && s[4]=='0')
        printf("Your Year of Admission is 2020\n");
    else if (s[3]=='1')
    {
        if (s[4]=='9')
            printf("Your Year of Admission is 2019\n");
        else if (s[4]=='8')
            printf("Your Year of Admission is 2018\n");
        else if (s[4]=='7')
            printf("Your Year of Admission is 2017\n");
        else if (s[4]=='6')
            printf("Your Year of Admission is 2016\n");
        else if (s[4]=='5')
            printf("Your Year of Admission is 2015\n");
        else
            printf("Older Records doesn't exist!!!\nSorry for Inconvenience\n");
    }
    else
        printf("Enter a valid s number\n");
    
    if (s[5]=='C' && s[6]=='S')
        printf("Dept of Computer Science\n");
    else if (s[5]=='I' && s[6]=='S')
        printf("Dept of Information Science\n");
    else if (s[5]=='A' && s[6]=='I')
        printf("Dept of Artificial Intelligence\n");
    else if (s[5]=='E' && s[6]=='C')
        printf("Dept of Electronics and Communication\n");
    else if (s[5]=='C' && s[6]=='V')
        printf("Dept of Civil Engineering\n");
    else if (s[5]=='M' && s[6]=='E')
        printf("Dept of Mechanical Engineering\n");
    else
        printf("Enter a valid s number\n");

    if (s[7]=='0' && s[8]=='0')
        printf("Your Roll number is %c",s[9]);
    else if (s[7]=='0')
        printf("Your Roll number is %c%c",s[8],s[9]);
    else
        printf("Your Roll number is %c%c%c",s[7],s[8],s[9]);
*/
return 0;

}
