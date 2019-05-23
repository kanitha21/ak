#include<stdio.h>
void main()
{
    int n,i,p=0,rem=0;
    scanf("%d",&n);
    while(n!=0)
    {
    rem=n%10;
     if(rem==0 || rem==1)
     {
         printf("yes");
         break;
     }
     n/=10;
      if(n!=0)
        {
            printf("no");
        }
       }
}
