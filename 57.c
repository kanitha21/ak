#include<stdio.h>
void main()
{
int n,k,a[50],i,count;
scanf("%d %d",&n,&k);
for(i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
    if(k==a[i])
    {
        count++;
    }
}
printf("%d",count);
}
