#include "stdio.h"



void main()
{
    int n, a, b;
    scanf("%d",&a);
    scanf("%d", &b);
    if (a==1)
    {
        printf("%d \n" , a);
        a = a+1;
    }

    for(int i = a ; i <= b ; i++)
    {
        for(int j =2 ; j < i ; j++)
        {
            if((i % j) == 0)
            {
                break;
            }
            printf("%d \n", j);
        }
        
    }
}

