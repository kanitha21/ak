#include<stdio.h>
#include<string.h>
void main()
{
    int i;
    char a[20];
   gets(a);
   for(i=0;i<strlen(a);i++)
   {
       if(i%2==0)
  {
   printf("%c",a[i]);
}
}
    printf(" ");
for(i=0;i<strlen(a);i++)
   {
       if(i%2!=0)
  {
   printf("%c",a[i]);
}
}
}
