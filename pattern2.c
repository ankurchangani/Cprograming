#include<stdio.h>
int main ()
{
    int rows = 5 , i  , j;

    for(i = 0 ; i< rows ; i++){
        for(j = 0 ; j < i ; j++){
            printf("") ;
        }

        for(j = i + 1 ; j<=rows ; j++){
            printf("%d" , j) ;
        }

        printf("\n") ;
    }
    return 0 ;
}