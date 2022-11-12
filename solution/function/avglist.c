#include <stdio.h>





int main(){

    int i , n ; 
    float avg ,sum = 0.0 , numbers[100] ;
    printf("give me the total number");
    scanf("%d" , &n);
    while ( n > 100 || n < 1)
    {
        printf("please give me the number between 1 and 100");
        scanf("%d" , &n);
    }
    for (i = 0; i < n ; i++)
    {
        printf("give me the num %d  :" , i+1);
        scanf("%f" , &numbers[i]);
        sum += numbers[i] ;
    }
    avg = (sum / n) ;
    printf("this is avg of numbers %.2f" , sum);

    return 0;

}