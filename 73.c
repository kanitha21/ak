#include<stdio.h>
void main()
{
    int n,i,a,b,count=0;
    scanf("%d",&n);
    scanf("%d %d",&a,&b);
    for(i=a;i<b;i++)
    {
        if(i==n)
        {
            count++;
        }
}
if(count==1)
{
    printf("yes");
}
 else
 {
     printf("no");
 }
}
