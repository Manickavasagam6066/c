#include<stdio.h>
int main()
{
    int n,a,b,i,t;
    scanf("%d",&n);
    a = 1;
    b = 1;
    printf("1 1 ");
    for(i=0;i<n-2;i++)
    {
       t = b; 
        b = a+b;
        a = t;
        printf("%d ",b);
    }
    return 0;
}
