#include "stdio.h"


int aval(int x);

int main()
{
    int n, a, b,min;
    scanf("%d",&a);
    min = a;
    scanf("%d", &b);
    if (min > b)
    {
        min = b;
        a = b;
        a = min;
    }
    
    
    
    
    
    if (a==1)
    {
        printf("%d" , a);
        printf("\n");
        a = a+1;
    }

    for(int i = a ; i <= b ; i++)
    {
        n = aval(i);
        if(n == 0)
        {
            printf("%d" , i);
            printf("\n");
        }        
    }
    return 0;
}


int aval(int x)
{
    for(int i =2 ; i < x ; i++)
    {
        if((x % i) == 0)
        {
            return 1;
        }

    }
    return 0;
}