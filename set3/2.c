#include <stdio.h>
int main()
{
int a,b[a],i,maxmium;
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
if(i==0)
maxmium=b[i];
if(maxmium<b[i])
max=b[i];
}
printf("%d",maxmium);
return 0;
}
