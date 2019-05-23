#include<stdio.h>
#include<math.h>
void main()
{
    int n,i,p=0;
    scanf("%d",&n);
    for(i=1;i<n/2;i++)
    {
        if(n==pow(2,i))
        {
         p=++i;
            break;
        }
        else 
        {
            break;
    }
    printf("%d",pow(2,p));
}
