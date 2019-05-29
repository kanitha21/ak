#include<stdio.h>
#include<string.h>
void main()
{
    int i,n;
    char a[20];
    gets(a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if(a[i]=='')
        {
            printf("%c",toupper(a[i+1]));
        }
        else
        {
            printf("%c",a[i]);
        }
    }
}
