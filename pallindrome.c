#include<stdio.h>
void main()
{
    int n,rem,dig=0,a;
    scanf("%d",&n);
    a=n;
    while(n!=0)
{
    rem=n%10;
    dig=dig*10+rem;
    n=n/10;
}
if(dig==a)
{
    printf("yes");

}
else
{
    printf("no");
}
}
