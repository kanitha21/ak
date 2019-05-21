#include<stdio.h>
void main()
{
    int a,n,d,i,tn=0;
    scanf("%d %d %d",&n,&a,&d);
   for(i = 0; i <n; i++) 
   {
       tn += a;
        a = a +d;
   }
   printf("%d",tn);

}
