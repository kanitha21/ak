#include<stdio.h>
void main()
{
    int l,b,h,v,a;
    scanf("%d %d %d",&l,&b,&h);
    v=l*b*h;
    a=(2*l*b)+(2*l*h)+(2*b*h);
    printf("%d %d",a,v);
}

