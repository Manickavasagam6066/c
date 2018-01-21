#include <stdio.h>
#include<conio.h>
void main()
{
   int n, reverse=0, r,t;
   printf("Enter an integer:");
   scanf("%d", &n);
   t=n;
   while(t!=0)
   {
      r=t%10;
      reverse=reverse*10+r;
      t/=10;
      }
}
