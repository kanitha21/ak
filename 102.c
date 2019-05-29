#include<stdio.h>
#include<string.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(n/2!=0)
    {
        printf("%d",n);
    }
    else
    {
   do
   {
       n/=2;
       printf("%d",n);
   }
   while(n/2);
}
}
