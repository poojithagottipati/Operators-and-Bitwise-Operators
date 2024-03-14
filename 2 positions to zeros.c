#include <stdio.h>
int main()
{
  int num,pos1,pos2;
  printf("enter n: ");
  scanf("%d",&n);
  printf("enter 2 bits: ");
  scanf("%d %d",&pos1,&pos2);
  int a = (1<<16)-1-(1<<(pos1-1));
  int b = (1<<16)-1-(1<<(pos2-1));
  a = a&b;
  printf("%d",num&a);
}
/*
enter num: 5
enter 2 bits: 1 3
0
*/
