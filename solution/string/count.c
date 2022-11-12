#include <stdio.h>

#define MAX_SIZE 1000


void main()
{
    char str[MAX_SIZE];
    int alphabets, digits, specialchars, i;
    alphabets = digits = specialchars = i = 0;
    printf("enter the string : ");
    gets(str);

    while(str[i] != '\0')
    {
        if ((str[i] >= 'a'  && str[i] <= 'z') || (str[i] >= 'A'  && str[i] <= 'Z'))
        {
            alphabets ++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            digits ++;
        }
        else
        {
            specialchars ++;
        }
        
        i ++ ;
    }
    printf("Total Alphabets : %d\n", alphabets);
    printf("Total Digits : %d\n", digits);
    printf("Total Special characters : %d\n", specialchars);

}