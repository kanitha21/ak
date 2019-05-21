#include<stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,x,y,z;
    scanf("%d %d",&a,&x);
    scanf("%d %d",&b,&y);
    a=a-b;
    x=x-y;
    c=abs(a);
    z=abs(x);
    printf("%d %d",c,z);
}
