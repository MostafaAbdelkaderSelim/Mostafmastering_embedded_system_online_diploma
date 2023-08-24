#include <stdio.h>

int main() {
    double num1, num2, num3;

    
    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    double largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    printf("The largest number is: %.2lf\n", largest);

    return 0;
}
