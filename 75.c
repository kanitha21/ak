#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int n,i
    gets(a);
    n=strlen(a);
    if(n%2==0)
    {
        i=n/2;
        str_replace(a,i,'*');
        str_replace(a,++i,'*');
        printf("%s",a);
    }
     else
     {
         i=n/2;
          str_replace(a,++i,'*');
        printf("%s",a);
     }
}
 
