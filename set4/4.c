#include <stdio.h>
#include<string.h>

int main()
{
	char b[100]="welcome.hai";
	 int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]=='.')
			count++;
	}
	printf("no. of lines are %d",count+1);
	return 0;
}
