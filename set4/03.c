#include <stdio.h>
#include<string.h>

int main()
{
	char b[100]="welcome you";
	 int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
			count++;
	}
	printf("no. of space are %d",count);
	return 0;
}
