#include<stdio.h>
void main()
{
    int n,rem=0,rev=0,p=1;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        p*=rem;
        n=n/10;
    }
    printf("%d",p);
}

