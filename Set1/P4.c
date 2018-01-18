#include<stdio.h>
int main()
{
char w;
scanf("%c",&w);
if((w>='a'&&w<='z')||(w>='A'&&w<='Z'))
printf("Alphabet");
else
printf("No");
return 0;
}
