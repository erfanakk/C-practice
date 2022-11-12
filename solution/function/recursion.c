#include <stdio.h>






void print30(int n);


int main()
{
    int num = 13;
    print30(num);

}   



void print30(int n)
{
    if (n <= 20 && n >= 0)
    {
        printf("%d\n" , n);
        n ++;
        print30(n);
    }
    else if (n > 20 && n < 0 )
    {
        printf("you can't print this number %d" , n);
        
    }

}