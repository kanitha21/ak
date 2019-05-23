#include<stdio.h>
void main()
{
  int m,n,p,i,count=0,a=0;
  scanf("%d %d",&m,&n);
  p=m*n;
  for(i=0;i<p/2;i++)
  {
      a=i*i;
      if(a==p)
      {
          count++;
      }
  }
  if(count!=0)
  {
      printf("yes");
  }
   else
   {
       printf("no");
   }

}
