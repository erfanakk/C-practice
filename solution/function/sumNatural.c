#include <stdio.h>

int sumAll(int n);

int main()
{
    int sum , num = 20;
    sum = sumAll(num);
    printf("\n this is sum %d" , sum);

}



int sumAll(int n)
{

    if (n > 0)
    {
        printf("\n this is n %d" , n);
        
        return n + sumAll(n-1);

    }
    else
    {
        return 0;
    }
}

