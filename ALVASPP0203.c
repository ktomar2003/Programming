//1...


#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        long long int n,max=0,maxpr=0;
        scanf("%lld",&n);
        long long int a[n];
        for(int i=0;i<n;i++)
            scanf("%lld",&a[i]);
        for(long long int i=0;i<n;i++){
            if(a[i]%2!=0)
                maxpr=0;
            else{
                maxpr++;
                if(maxpr>max)
                    max=maxpr;
            }
        }
        printf("%lld\n",max);
    }
    return 0;
}


//2....


#include<stdio.h>
#include<string.h>
int main()
{
        int t;
        scanf("%d",&t);
        while(t--){
            int n,i,m=0,d=0;
        scanf("%d",&n);
        char s[n];
        for(i=0;i<n+1;i++){
            scanf("%c", &s[i]);
        }
        s[i]='\0';
     for(i=0;i<=n;i++)
     {
         if(m==0)
         {
         if(s[i]=='m')
             m=1;
         }
         if(m==1)
         {
            if(s[i]=='o')
             m=2;
         }
         if(m==2)
         {
             if(s[i]=='m')
             m=3;
         }
         if(d==0)
         {
             if(s[i]=='d')
             d=1;
         }
         if(d==1)
         {
            if(s[i]=='a')
            d=2;
         }
         if(d==2)
         {
            if(s[i]=='d')
            d=3;
         }

         if(m==3)
         {
            printf("Mom\n");
            break;
         }
         if(d==3)
         {
            printf("Dad\n");
            break;
         }


     }
     if(m!=3&&d!=3)
         printf("Goo-Goo\n");
        }
 return 0;
}
