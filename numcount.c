#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int n,s=0,i;
char a[50];
gets(a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(isdigit(a[i]))
{
     s++;
}
}
printf("%d",s);
}
