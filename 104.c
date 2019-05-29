#include<stdio.h>
void main()
{
    int n,k,s=1;
    scanf("%d %d",&n,&k);
    while(k!=0)
    {
        s*=n;
        k--;
    }
    printf("%d",s);
}
