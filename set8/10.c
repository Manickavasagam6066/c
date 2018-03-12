#include <stdio.h>
int main() 
{
    int s,i,t;
	printf("enter the  number:\t");
	scanf("%d",&s);
    while(s!=0)
    {
        t=s%10;
    s=s/10;
    if((t%2)!=0)
	
	    {
	        printf("%d ",t);
	    }
	}
	
	
	return 0;
}
 
