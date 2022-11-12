#include <stdio.h>

void main()
{
    char a , b;
    int asc = 2;
    a = 'a';
    b = 'A';
    printf("this is small %d\n" , a-'a');
    printf("this is big %d\n" , b-'A');
    printf("ascii of num in str %c" , asc+'a');
}