#include <stdio.h>
int main()
{
	int i=1,n;
	printf("enter the number\n");
	scanf("%d",&n);
	while(i<=10)
	{
	    n++;
	    if((n%10)==0)
	    {
	    printf("%d",n);
	    break;
	    }
	}
}

