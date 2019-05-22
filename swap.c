#include<stdio.h>
#include<string.h>
#include<ctype.h>
void main()
{
int a,b,temp;
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
 printf("%d %d",a,b);
}
