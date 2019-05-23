#include<stdio.h>
void main()
{
    int n,rem=0,m,rev=0;
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
	if(rem%2!=0)
	{
	    printf("%d ",rem);
	}
}
}
 
