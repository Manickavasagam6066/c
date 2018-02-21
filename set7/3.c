#include<stdio.h>
#include<string.h>
int main()
{
	char b[100]="welcome to the students";
	 int i,count=1;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
			count++;
	}
	printf("no. of words are %d",count);
	return 0;
}
