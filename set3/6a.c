#include<stdio.h>
int main()
{
int n,d[n],i,j,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&d[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(d[j]<d[i])
{
s=d[i];
d[i]=d[j];
d[j]=s;
}}}
for(i=0;i<n;i++)
{
printf("%d ",d[i]);
}
}
