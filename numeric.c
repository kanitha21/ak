#include<stdio.h>
#include<ctype.h>
void main()
{
    int n;
    scanf("%d",&n);
    if(!isdigit(n))
    {
        printf("yes");
    }
    else 
    {
        printf("No");
    }
}
