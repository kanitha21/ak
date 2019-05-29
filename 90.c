#include<stdio.h>
#include<string.h>
void main()
{
    char a[20],temp[20];
    int i,len,j;
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
