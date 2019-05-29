#include<stdio.h>
#include<string.h>
void main()
{
    int n,i;
    char a[20];
    gets(a);
    scanf("%d",&n);
    for(i=n-1;i<=strlen(a);i++)
    {
        printf("%c",a[i]);
    }
}

