#include <stdio.h>


int main(){

    int i ;
    double avg, sum, num, nump=0.0;
    for (i = 0 ; i<10; i++)
    {
        printf("give me n%d \n", i);
        scanf("%lf" , &num);
        if (num < 0.0)
        {
            continue;
        }

        sum += num ;
        nump++;
    }

    avg =  sum / nump;

    printf("\nthe sum of the posetive numbers is %.2lf and the average is %.2lf and the total postive is %lf  ", sum, avg, nump);
    return 0;

}