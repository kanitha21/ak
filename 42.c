#include<stdio.h>
#include<string.h>
void main()
{
   char a[100],b[100],m,n,i;
   scanf("%s %s",&a,&b);
   m=strlen(a);
   n=strlen(b);
  for(i=0;a[i]==b[i] && a[i]=='\0';i++);
      if(a[i]>b[i])
      {
          for(i=0;i<m;i++)
          {
              printf("%s",a[i]);
          }
          
      }
     else if(a[i]<b[i])
      {
          for(i=0;i<n;i++)
          {
              printf("%s",b[i]);
          }
      }
      else
      {
       for(i=0;i<m;i++)
          {
              printf("%s",a[i]);
          }
          }
}
   
