#include<stdio.h>
int main()
{
int n,a[n],i,j,s;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);}
for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[j]<a[i])
{
s=a[i];
a[i]=a[j];
a[j]=s;
}}}
printf("%d",a[n/2]);
}
