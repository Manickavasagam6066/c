#include <stdio.h>
int main() 
{
    int s,n,m,i,t,b=1;
	printf("enter the 1st number:\t");
	scanf("%d",&n);
    printf("enter the 2nd number:\t");
    scanf("%d",&m);
	s=n*m;
	for(i=1;i<s;i++)
	{
	    t=i*i;
	    if(t==s)
	    {
	        b=2;
	        break;
	    }
	}
	if(b==2)
	printf("yes");
	else 
	printf("no");
	return 0;
}
 
