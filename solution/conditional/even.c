#include <stdio.h>


int funeven(int x);

void main()
{
    int num;

    scanf("%d" , &num);
    
    switch (funeven(num))
    {
    case 0:
        printf("even");
        break;                  
    case 1:
        printf("sag");
        break;

    default:
        printf("khar");
        break;
    }
}



int funeven(int x)
{
    if (x % 2 == 0){
        return 1 ;
    }
    else{
        return 0;
    }

}   
