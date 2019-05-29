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
    for(j=i+1;j<len;j++)
    {
        if(a[i]>a[j])
        {
            temp[i]=a[i];
            a[i]=a[j];
            a[j]=temp[i];
        }
    }
}
for(i=0;i<len;i++)
{
printf("%c",a[i]);
    }
}
