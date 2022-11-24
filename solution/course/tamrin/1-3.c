#include "stdio.h"



int main()
{
    int score;
    scanf("%d" , &score);
    switch (score)
    {
    case 19:
        printf("very good");
        break;
    case 18:
        printf("good");
        break;
    case 20:
        printf("super");
        break;
      
    default:
        printf("FAIL");
        break;
    }
    return 0;
}