#include <stdio.h>
int main()
{
    int a,s,i,d;
    printf("two value:");
    scanf("%d",&a);
    scanf("%d",&s);
for(i=2;i<=a;i++)
{
   if((a%i)==0)
    {
        if((s%i)==0)
     {  
         d=i;
     }
    }
   
}printf("the greast common divisor: %d",d);

    return 0;
}

