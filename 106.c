#include<stdio.h>
void main()
{
    int n,k,a[10],i,b[10];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            b[i]=a[i];
        }
    }
    printf("%d",a[k]);
}
