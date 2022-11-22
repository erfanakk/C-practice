#include <stdio.h>


void main()
{
    int total , num ;
    scanf("%d" , &num);
    for (total = 0 ; num > 0 ; num /= 10)
    {
        total += (num % 10 );

    }
    printf("/n %d" , total);
}