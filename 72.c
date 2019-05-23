#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],n=0,i;
    gets(a);
    n=strlen(a);
   for(i=0;i<n;i++)
   {
       if(a[i]=='a' || 'A' || 'e' ||'E' ||'i' ||'I' ||'o' ||'O' ||'u' ||'U')
       {
           printf("yes");
           break;
       }
   }
   else
   {
       printf("no");
   }
}
