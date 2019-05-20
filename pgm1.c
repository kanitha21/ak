# ak
#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("Enter the number");
scanf("%d",&n);
 if(isdigit(n))
{
if(n>0)
{
printf("Postive");
}
else if(n<0)
{
printf("Negative");
}
else
{
printf("Zero");
}
 }
 else
 {
 printf("Invalid");
 }
 getch();
 }
