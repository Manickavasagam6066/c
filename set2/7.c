#include <stdio.h>
 
int main()
{
    int n, s= 0, r = 0, c= 0, a;

    scanf("%d", &n);
    a = n;
    while (n != 0)
    {
        r= n % 10;
        c=r*r*r;
        s = s+ c;
        n = n/ 10;
    }
    if (s== a)
        printf ("Yes");
    else
        printf ("No");
}
