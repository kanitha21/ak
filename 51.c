#include<stdio.h>
void main()
{
    int n,rem=0,m,b=0,rev=0;
    scanf("%d",&n);
   while(n!=0)
	{
	rem=n%10;
	rev=rev*10+rem;
		n=n/10;
	}
	
	m=rev;
	while(m!=0)
	{
	rem=m%10;
	m=m/10;
	printf("%d ",b);
}
}
 
