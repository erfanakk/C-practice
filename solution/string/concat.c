#include  <stdio.h>
#include <string.h>

void main()
{
    char str1[1000] , str2[1000];
    printf("give me the first string : ");
    gets(str1);
    
    printf("give me the second string : ");
    gets(str2);


    strcat(str1 , str2);
    printf("oh is str1 ?   %s \n " , str1);
    
}