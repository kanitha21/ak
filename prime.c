#include<stdio.h>
void main()
{
    int n,i,a=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%2==0)
        {
            a=1;
            break;
        }
    }
    if(a==1)
    {
        printf("no");
    }
    else
{
    printf("yes");
}
    
}
