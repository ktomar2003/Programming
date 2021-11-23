#include <stdio.h>

int main() 
{
	int n,i,flag=0;
	//printf("Enter a no.:");
	scanf("%d",&n);
	if(n==0 || n==1)
	{
	    printf("Number is neither prime nor composite!!!");
	}
	else
	{
	    for(i=2;i<(n/2);i++)
	    {
	        if(n%i==0)
	        {
	            flag=1;
	            break;   
	        }
	    }
	if(flag==1)
	    printf("Number is not PRIME!!!");
	    
	else
	    printf("Number is PRIME!!!");
	}
	return 0;
}
