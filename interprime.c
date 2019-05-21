#include<stdio.h>
void main()
{
    int a,b,i,c=0,j;
    scanf("%d %d",&a,&b);
    for(i=a+1;i<b;i++)
  {
      for(j=2;j<=i/2;j++)
      {
        if(i%j==0)
        {
          c=1;
          break;
        }
      }
      if(c==0)
      {
        printf("%d ",i);
  }
  }
}
