#include<stdio.h>
int main()
{
	int no,a,di,i,sum=0;
	scanf("%d",&no);
	scanf("%d",&a);
	scanf("%d",&di);
	for(i=0;i<no;i++)
	{
		sum=sum+a;
		a=a+di;

	}
	printf("%d",sum);
}
