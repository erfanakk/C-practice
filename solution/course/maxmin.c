#include <stdio.h>

void main()
{
    int max , min , num,n=10;
    printf("give me the number \n");
    scanf("%d" , &num);
    max = num;
    min = num;
    
    while(n>1)
    {   
        printf("give me the number \n");
        scanf("%d" , &num);
        if (num > max)
        {
            max = num;
        }
        if (min > num)
        {
            min = num;
        }
        n --;
    }
    printf("the max number is %d and the min number  is %d " , max , min);
}