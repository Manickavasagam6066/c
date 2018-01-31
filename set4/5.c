#include<stdio.h>
void main()
{
    char b[100]="hai 123456789";
    int i,count=0;
    for(i=0;b[i]!='\0';i++)
    {
        if(b[i]=='0'||b[i]=='1'||b[i]=='2'||b[i]=='3'||b[i]=='4'||b[i]=='5'||b[i]=='6'||b[i]=='7'||b[i]=='8'||b[i]=='9')
        count++;
        
    }
    printf("\nthe number of numeric character %d",count);
}
