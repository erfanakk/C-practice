#include <stdio.h>



void main()
{
    int days;
    printf("enter days : ");
    scanf("%d" , &days);

    int year = days / 365;
    int week = (days % 365) / 7 ;
    int day = days - ((year * 365 ) + (week * 7));
    printf("%d years, %d weeks and %d days", year , week , day);

}
