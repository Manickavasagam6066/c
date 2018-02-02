#include<stdio.h>
void main()
{
int a[10],i,n,j;
for(i=0;i<10;i++)
{
scanf("%d\n",&a[i]);
}
n=a[0];
for(j=0;j<10;j++)
{
if (n<a[j])
n=a[j];
}
printf("The largest number is : %d",n);
}
