#include <stdio.h>
int main()
{
    int s,d,f;
    printf("enter value");
    scanf("%d",&s);
    scanf("%d",&d);
    f=s-d;
    printf("\n value %d",f);
    if((f%2)==0)
    printf("even");
    else
    printf("odd");
    return 0;
}
