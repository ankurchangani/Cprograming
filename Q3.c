#include <stdio.h>

int main() {
    int N;
    int sum = 0; 


    printf("Enter a positive integer N: ");
    scanf("%d", &N);

 
    for (int i = 1; i <= N; i++) {
        sum += i;
    }

    printf("The sum of the series 1 + 2 + ... + %d is: %d\n", N, sum);
    
    return 0;
}

