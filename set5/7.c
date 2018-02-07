#include<stdio.h>
void main()
{
    int a[100],n,j,t,i;
    printf("enter how many numbers");
    scanf("%d",&n);
    printf("%d",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
          printf("\nenter the numbers%d",a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;
            }
        }
       
    }
    printf("\nsmallest no. is :%d\nlargest no. is:%d",a[0],a[n-1]);
}
