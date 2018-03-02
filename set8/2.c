#include <stdio.h>
#include<string.h>
int main()
{
    int i,f=0;
    char word[100];
    printf("the word is ");
    scanf("%s",word);
    for(i=0;i<100;i++)
{
    if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u'|| word[i]=='A'||word[i]=='E'||word[i]=='I'||word[i]=='O'||word[i]=='U')
    {
    f=1;}
}
if(f==1)
printf("yes");
else
printf("no");
    return 0;
}
