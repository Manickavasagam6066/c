#include <stdio.h>
int main()
{
	int x,t,count=0,flag=0;
	printf("\n enter the value:");
	scanf("%d",&x);
	while(x>0)
	{
	t=x%10;
	count++;
	if(t==1||t==0)
	flag++;
            x=x/10;
	}
	if(count==flag)
	printf("\n YES");
	else
	printf("\n NO");
	return 0;
}
