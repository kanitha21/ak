#include<stdio.h>
void main()
{
    int n,c=0,rem;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
     n/=10;
     c++;
    }
printf("%d",c);
}
