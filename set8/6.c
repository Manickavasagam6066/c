#include <stdio.h>
#include<string.h>
int main() 
{
	int k=1;
	int i,n;
	printf("enter the number:\t");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		
		
			if((n%i)==0)
			{
			    k=2;
			    break;
			    
			}
		
 	
	}
	if(k==2)	
	printf("yes");
	else
	printf("no");
	return 0;
}
 
