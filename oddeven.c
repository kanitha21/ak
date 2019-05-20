#include<stdio.h>
#include<conio.h>
#include<ctype.h>
void main()
{
int n;
scanf("%d",&n);
if(isdigit(n))
{
if(n/2)
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
