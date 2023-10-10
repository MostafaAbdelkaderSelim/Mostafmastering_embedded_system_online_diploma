#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1.0;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        // Handle negative exponents
        return 1.0 / power(base, -exponent);
    }
}

int main() {
    double base, result;
    int exponent;

    printf("Enter base number: ");
    scanf("%lf", &base);

    printf("Enter power number (positive integer): ");
    scanf("%d", &exponent);

    if (exponent < 0) {
        printf("Exponent should be a non-negative integer.\n");
    } else {
        result = power(base, exponent);
        printf("%.lf^%d = %.lf\n", base, exponent, result);
    }

    return 0;
}
