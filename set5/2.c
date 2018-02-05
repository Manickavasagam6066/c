#include "stdio.h"
int main()
{
  char b[1000],c[1000];
  int i,j,count=0,count2=0;
  scanf("%s",&c);
  scanf("%s",&c);
  for(i=0;b[i]!='\0';i++)
  {
    count=count+1;
  }
   for(j=0;c[j]!='\0';j++)
    {
      count2=count2+1;
    }
  if(count>count2)
  {
    printf("%s",b);
  }
  else
  {
    printf("%s",c);
  }
  return 0;
}

