#include<stdio.h>
 int check(int n);
int main()
{
   int n;
   scanf("%d",&n);
   check(n);
    if(check(n)==1)
    {
        printf("yes");
    }
     else
     {
         printf("no");
     }
   return 0;
}
 check(int n)
 {
     int x;
     if (x == 0)
      return 0;
     while(n!=1)
     {
         if(n%2!=0)
         {
              return 0;
         x /= 2;
   }
   return 1;
}
         }
    
