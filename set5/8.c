#include<stdio.h>
void main()
{
    int n,t,i,avg;
    printf("enter how many numbers");
    scanf("%d",&n);
    printf("%d",n);
    for(i=1;i<=n;i++)
    {
        
          printf("\nenter the numbers%d",i);
    }
    t=n%2;
    if(t==0)
    {
    	avg=n/2;
    }
    else
    {
    	avg=n/2;
    	++avg;
    }
     printf("\navg%d",avg);
    
}
