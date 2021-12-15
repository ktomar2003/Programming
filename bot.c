#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n,grid[101][101];
    //printf("Enter N:");
    scanf("%d",&n);
    printf("%d",n);
    if(n%2 == 0)
    {
        //printf("Please Enter an Odd number!!!");
        exit(0);
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                grid[i][j]='-';
            }
        }
        grid[0][0]=grid[n-1][n-1]=grid[0][n-1]=grid[n-1][0]='p';
        grid[n/2][n/2]='m';
    }
    return 0;
}
