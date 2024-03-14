#include <stdio.h>
int main()
{
   int n;
   printf("enter num: ");
   scanf("%d",&n);
   int count=0;
   int num = n;
   //nbits = sizeof(int)*8;
   while(n!=0 )
   {
    count++;
    n = n>>1;
   }
   int c = count-1,b=0;
   for(int i=1;i<=count;i++)
   {
     b = b*10 + (num>>c)&1;
     c--;
     printf("%d",b);
   }
}
/*
enter num: 12
1100
*/
