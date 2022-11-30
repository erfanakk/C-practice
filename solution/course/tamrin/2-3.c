
#include "stdio.h"
int multip(int x);
int multin(int x);
int main()
{
    int p , n ;
    scanf("%d" , &p);
    scanf("%d" , &n);
    printf("%d\n" , multip(p));
    printf("%d" , multin(n));
}




int multip(int x)
{
    if (x == 0) 
    {
        return 1;
    }
    else
    {
        return x * multip(x - 1);
    }
}

int multin(int x)
{
    if (x == 0) 
    {
        return 1;
    }
    else
    {
        return x * multin(x + 1);
    }
}