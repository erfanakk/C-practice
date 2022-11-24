#include "stdio.h"



int main()
{
    int number , i , b[10];
    scanf("%d",&number);
    for (i = 0; number > 0 ; i++)
    {
        b[i] = number%2;
        number = number/2;

    }
    for (i = i-1; i >= 0; i--)
    {
        printf("%d", b[i]);
    }
    
    return 0;
}