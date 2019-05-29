#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int count=0;
    gets(a);
    int len=strlen(a);
    for(int i=0;i<len;i++)
    {
        if(a[i]==a[i+1])
        {
            count++;
        }}
        if(count!=0)
        {
            printf("No");
        }
         else
         {
             printf("Yes");
         }
    }

