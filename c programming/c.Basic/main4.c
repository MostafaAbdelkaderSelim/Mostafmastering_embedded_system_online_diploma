#include <stdio.h>

int main() {
    double num1, num2;

    printf("Enter two numbers: ");
    scanf("%lf%lf", &num1, &num2);

    double product = num1 * num2;

    printf("Product: %.6lf\n", product);

    return 0;
}
