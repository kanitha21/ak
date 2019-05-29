#include<stdio.h>
#include<string.h>
void main()
{
    char a[20];
    int i,len,temp,j;
gets(a);
len=strlen(a);
for(i=0i<len;i++)
{
    for(j=i+1;j<len-1;j++)
    {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
for(i=0;i<len;i++)
{
printf("%c",a[i]);
    }
}
