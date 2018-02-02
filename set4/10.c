#include <stdio.h>
int main()
{
    int i, n, t1 = 0, t2 = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);
 for (i = 1; i <= n; ++i)
    {
        next = t1 + t2;
        t1 = t2;
        t2 = next;
        printf("%d,",t1);
    }
    printf("Fibonacci Series: ");
    return 0;
}
