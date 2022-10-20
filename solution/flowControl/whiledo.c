#include <stdio.h>
int main()
{

    int i = 11;
    do {
        printf("%d in scope\n" , i);
        i++;
    }
    while(i < 10);

}