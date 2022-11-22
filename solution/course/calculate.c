#include <stdio.h>

void main()
{
    int x , y, o;
    
    printf("give me the  number \n");
    scanf("%d" , &x);
    printf("give me the  number \n");
    scanf("%d" , &y);
    printf("give me the  operator \n");
    scanf("%d" , &o);
    switch (o)
    {
    case (1):
        
        printf("the answer is = %d " , x+y);
        break;
    case (2):
        
        printf("the answer is = %d " , x - y);
        break;
    case (3):
        
        printf("the answer is = %d " , x * y);
        break;
    
    default: 
        printf("we does not support that operator");
        break;
    }    
         

}