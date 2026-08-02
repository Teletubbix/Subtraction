#include <stdio.h>
#include "math_subtract.h"
#include "print_output.h"
#include "config.h"

int main() {
    printf("Subtraction Calculator v%s\n", PROJECT_VERSION);

    double num1, num2;
    printf("Enter two numbers (first - second): ");
    scanf("%lf %lf", &num1, &num2);

    double ans = subtract(num1, num2);
    show_result(ans);

    return 0;
}