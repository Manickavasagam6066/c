#include<stdio.h>
int main()
{
int n,c=0,x=1,i;
printf("enter value");
scanf("%d",&n);
while(n!=1)
{
n=n/2;
c++;
}
for(i=0;i<=c;i++)
{
x=x*2;
}
printf("%d",x);
}
