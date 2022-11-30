#include "stdio.h"


int main()
{
    int num , r , a=0;
    scanf("%d" , &num);
    scanf("%d" , &r);
    while(num != 0)
    {
        num = num - r;
        a = a + 1;

    }
    printf("%d" , a);

    return 0;

}