#include<stdio.h>
void main()
{
    int n,m,p;
    scanf("%d %d",&m,&n);
    p=m*n;
    if(p%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}
