#include<stdio.h>
int main ()
{
    int sum = 0 , i ;
    for(i = 101 ; i<=200 ; i++){
        if(i % 5 ){
            sum += i ;

        }
    }

      printf("The sum of all integers greater than 100 and less than 200 that are divisible by 5 is: %d\n", sum);
    return 0 ;
}