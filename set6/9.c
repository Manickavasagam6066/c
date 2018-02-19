#include <stdio.h>
int main()
{
	int a[10],i,max=0,j;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		printf("\nthe value is %d",a[i]);
		if(a[i]>max)
		max=a[i];
	}
	printf("\n max%d",max);
	return 0;
}
