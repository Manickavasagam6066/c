#include <stdio.h>
int main()
{
    int n,i,l,r,f=0;
    printf("the numer is ");
    scanf("%d",&n);
    scanf("%d",&l);
    scanf("%d",&r);
    for(i=l;i<r;i++)
{
    if(i==n)
     f=1;
}
if(f==1)
printf("yes");
else
printf("no");
    return 0;
}
