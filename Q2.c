#include<stdio.h>
int main () 
{
    int no , i;
    printf("Enter the No ") ;
    scanf("%d" , & no) ;

    for(i = 0 ; i<=10 ; i++){
         printf("%d * %d = %d \n", no, i, no * i);
    }
    return 0 ;
}