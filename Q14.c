#include <stdio.h>


int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);

int main() {
    int num1, num2;
    printf("Enter any two numbers: ");
    scanf("%d%d", &num1, &num2);

    printf("\nAddition = %d", add(num1, num2));
    printf("\nSubtraction = %d", subtract(num1, num2));
    printf("\nMultiplication = %d", multiply(num1, num2));

   
    if (num2 != 0) {
        printf("\nDivision = %.2f", divide(num1, num2));
    } else {
        printf("\nDivision by zero is undefined.");
    }

    return 0;
}


int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}
