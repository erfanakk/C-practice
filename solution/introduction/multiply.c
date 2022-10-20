#include <stdio.h>

int main(void)
{
    double number1, number2, product;
    number1 = 2.5;
    number2= 4.9;
    product = number1 * number2;
    printf("%.2lf * %.2lf = %.2lf",number1,number2,product);

    return 0 ;
}