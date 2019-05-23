#include<stdio.h>
#include<ctype.h>
#include<string.h>
void main()
{
  char a[50],n,i,c=0;
  gets(a);
  n=strlen(a);
  for(i=0;i<n;i++)
  {
      if(isalnum(a[i]) || a[i]=='_')
      {
          c++;
      }
     }
    if(n==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
  
}
