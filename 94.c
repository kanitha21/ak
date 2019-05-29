#include<stdio.h>
void main()
{
    int n,k,a[10],i;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("%d",a[k]);
}

