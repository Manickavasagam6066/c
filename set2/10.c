#include<stdio.h>
int main()
{
int a,s=1,i;
scanf("%d",&a);
if(a>0)
{
for(i=1;i<=5;i++)
{
s=a*i;
printf("%d ",s);
}
}
return 0;
}
