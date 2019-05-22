#include<stdio.h>
#include<string.h>
void main()
{
int n,s=1,i,r;
char a[50];
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i] == ' ')
{
                       s++;
}
}
printf("%d",s);
}
