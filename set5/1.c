#include<stdio.h>
#include<string.h>
int main()
{
	int k,i;
	char str[40];
	printf("enter times\n");
	scanf("%d",&k);
	scanf("%s",&str);
	for(i=1;i<=k;i++)
	{
		printf("\n%s",str);
	}
getch();
}
