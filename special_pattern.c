int main()
{
    int n=4,a=1,b=(n*n)+1;
    for(int i=n;i>0;i--) {
        for(int j=0;j<n-i;j++)
            printf("--");
      
        for(int h=0;h<i;h++)
            printf("%d*",a++);
      
        for(int k=0;k<i-1;k++)
            printf("%d*",b++);
      
        printf("%d\n",b);
        b=b-2*(i-1);
    }
    return 0;
}
//Incomplete Pattern (Try to COMPLETE it) , Achieved First Half Pattern
/*
int main()
{
    int n=4,sp,i,j,num=1;
    for(int i=0;i<n;i++)
    {
        for(sp=0;sp<=((i-1)*2)+1;sp++)
        {
            printf("-");
        }
        for(j=0;j<n-i;j++)
        {
            printf("%d*",num);
            num++;
        }
        printf("\n");
    }
}
*/
