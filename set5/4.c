#include<stdio.h>
void main()
{
	int n,max=10,min=1;
	printf(" the number\n");
	scanf("%d",&n);
	if((n-min)*(n-max)<=0)
	{
		printf("yes");
	}
  else
	printf("no");
	}
