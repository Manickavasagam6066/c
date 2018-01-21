#include <stdio.h>
int main()
{
  int n1, n2, i, p, n, c,r;
  scanf("%d %d", &n1, &n2);
  for(i=n1+1; i<n2; ++i)
  {
      p=i;
      n=0;
      while(p!=0)
      {
          r=(p%10);
c=r*r*r;
          n=n+c;
          p/=10;
      }
      if(i==n)
      {
          printf("%d ",i);
      }
  }
  return 0;
}
