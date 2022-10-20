#include <stdio.h>

int main(void)
{

    char opration;
    int n1 , n2, sum, product;
    printf("give me the opration ");
    scanf("%c" , &opration);

    printf("\ngive me the numbers ");
    scanf("%d %d",&n1 , &n2);

    switch (opration)
    {
    case '+':
        sum = n1 + n2;

        printf("the sum of %d and %d  = %d" , n1, n2 , sum);
        
        break;
    
    case '*':
        product = n1 * n2;
        printf("the multiply of %d and %d  = %d" , n1, n2 , product);
        break;


    default:
        printf("we don't support this opration %c" , opration);
    }




}