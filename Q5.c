#include <stdio.h>
int main()
{
    int months, days;

    printf("Enter the days ");
    scanf("%d", &days);

    months = days / 30;
    days = days % 30;

    printf("Months = %d Days = %d" , months , days) ;
    return 0 ;
}