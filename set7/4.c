#include <stdio.h>
int main()
{
int x,y,t;
scanf("%d",&x);
scanf("%d",&y);
t=x+y;
printf("value %d",t);
if((t%2)==0)
printf("\neven");
else
printf("\nodd");
return 0;
}
