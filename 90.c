#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,len;
gets(a);
len=strlen(a);
for(i=0;i<len;i++)
{
 if(isdigit(a[i]))
    {
        printf("%c",a[i]);
    }
    
}
}
