#include <stdio.h>
#include "calculator.h"

float div(float a, float b) {
    if (b == 0) {
        printf("Error: Division by zero!\n");
        return 0;
    }
    return a / b;
}