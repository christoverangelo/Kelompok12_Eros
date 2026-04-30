#include <stdio.h>
#include "calculator.h"

int main() {
    int choice;
    float num1, num2, result;

    printf("=== Simple Calculator ===\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Choose operation (1-4): ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    switch(choice) {
        case 1:
            result = add(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 2:
            result = sub(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 3:
            result = mul(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        case 4:
            result = div(num1, num2);
            printf("Result: %.2f\n", result);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}