#include <stdio.h>
#include "math_subtract.h"
#include "print_output.h"
#include "config.h"

int main() {
    printf("Subtraction Calculator v%s (%s mode)\n", PROJECT_VERSION, BUILD_TYPE);

    double num1, num2;
    printf("Enter two numbers (first - second): ");
    scanf("%lf %lf", &num1, &num2);

    double ans = subtract(num1, num2);
    print_output(ans);

    return 0;
}