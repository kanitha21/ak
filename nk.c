#include<stdio.h>
void main()
{
    int sum=0,i,n,k;
    int a[5];
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=k;i++)
    {
    sum+=i;
}
printf("%d",sum);
}
