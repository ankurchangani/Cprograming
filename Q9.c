#include <stdio.h>

int main() {
    int num;

    // Asking user for input
    printf("Enter an integer: ");
    scanf("%d", &num);

    // Using if statement
    if (num > 0) {
        printf("The number is positive.\n");
    }

    // Using if-else statement
    if (num < 0) {
        printf("The number is negative.\n");
    } else {
        printf("The number is zero.\n");
    }

    // Using if-else-if statement
    if (num > 100) {
        printf("The number is greater than 100.\n");
    } else if (num > 50) {
        printf("The number is greater than 50 but less than or equal to 100.\n");
    } else {
        printf("The number is 50 or less.\n");
    }

    // Using nested if statement
    if (num % 2 == 0) {
        printf("The number is even.\n");
        if (num > 10) {
            printf("The number is greater than 10.\n");
        } else {
            printf("The number is 10 or less.\n");
        }
    } else {
        printf("The number is odd.\n");
    }

    return 0;
}
