#include<stdio.h>
void main()
{
    int a,d,n,sum=0;
    scanf("%d %d %d",&a,&d,&n);
    while(n>0)
    {
        sum+=a;
        a=a+d;
        n--;
    }
    printf("%d",sum);
}

