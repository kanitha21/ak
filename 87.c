#include<stdio.h>
void main()
{
    int a,b,i,gcd;
    scanf("%d %d",&a,&b);
    for(i=1; i <=a && i <=b; ++i)
    {
        if(a%i==0 && a%i==0)
            gcd = i;
    }
    printf("%d",gcd);

    }

