
#include <stdio.h>

int main() 
{
    int num;
    printf("enter num: ");
    scanf("%d",&num);
    if(num&1)
    printf("odd number");
    else
    printf("even number");

    return 0;
}
/*
enter num: 6
even number
*/
