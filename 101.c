#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,s;
    char a[20];
    gets(a);
    scanf("%d",&n);
    s=strlen(a);
    for(i=n-1;i<s;i++)
    {
    printf("%c",a[i]);
        
    }
}

