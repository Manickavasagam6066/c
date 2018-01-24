#include<stdio.h>
int main()
{
int s=0;
int min=0;
int hour=0;
scanf("%d",&s);
min=s%60;
hour=(s-min)/60;
printf("%d %d\t ",hour,min);
}
