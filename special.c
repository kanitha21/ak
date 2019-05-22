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
if(!((a[i] >= 'a' && a[i] <= 'z') || (a[i] >= 'A' && a[i] <= 'Z') ||(a[i] >= '0' && a[i] <= '9') ))
{
    s++;
}
}
 printf("%d",s);
}
