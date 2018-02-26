#include <stdio.h>
int main()
{
	int i,n,k=1;
	printf("enter the number\n");
	scanf("%d",&n);
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			k=0;
			break;
		}
	}
if(k==1)
printf("yes");
else
printf("no");
return 0;
}
