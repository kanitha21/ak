#include<stdio.h>
void main()
{
    int n[10],i,min;
    for(i=0;i<10;i++)
    {
        scanf("%d",n[i]);
    }
     min=n[0];
     for(i=0;i<10;i++)
     {
      if(min>n[i])
    {
        min=n[i];
    }
}
printf("%d",min);
}
 
