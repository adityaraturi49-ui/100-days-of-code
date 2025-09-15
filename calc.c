#include <stdio.h>

int main() {
    float num1, num2; 
    float sum, difference, product, quotient;
    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    if (num2 != 0) {
        quotient = num1 / num2;
    } else {
        printf("Cannot divide by zero!\n");
    }
    prin
