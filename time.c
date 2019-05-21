#include<stdio.h>
#include<ctype.h>
void main()
{
    int n,a,c,e;
    scanf("%d",&n);
    a=n/60;
    e=n-(a*60);
    printf("%d %d",a,e);
}
