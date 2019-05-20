#include<stdio.h>
#include<ctype.h>
void main()
{
int n;
scanf("%d",&n);
if((n>0) && !(isdigit(n)))
{
if((n%2)==0)
{ 
printf("Even");
}
 else
 {
 printf("Odd");
 }
 }
else
{
printf("Invalid");
}
}
