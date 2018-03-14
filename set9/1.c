#include <stdio.h>
int main() 
{
 int a[100],b[100],c[100];
 int i;
 printf("Enter the diff :");
 for(i=0;i<100;i++)
 {
 	scanf("%d %d\n",&a[i],&b[i]);
 	
 }
 for(i=0;a[i]!=NULL;i++)
 {
 	c[i]=b[i]-a[i];
 	printf("%d\n",c[i]);
 }
 
	return 0;
  }
