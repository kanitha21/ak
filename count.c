#include<stdio.h>
void main()
{
    int i=1,n;
    scanf("%d",n);
    while(n!=0)
    {
        n/=10;
        i++;
    }
    printf("%d",i);
}
