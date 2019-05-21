#include<stdio.h>
void main()
{
    int n,a,rem,res=0;
    scanf("%d",&n);
    a=n;
    while(n!=0)
    {
    rem=n%10;
    res+=rem*rem*rem;
    n/=10;
    }
     if(res==a)
     {
         printf("yes");
     }
    else
    {
        printf("no");
    }
}
