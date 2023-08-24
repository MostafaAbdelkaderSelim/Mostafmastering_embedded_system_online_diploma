#include <stdio.h>

int main() {
    double number;

  
    printf("Enter a number: ");
    scanf("%lf", &number);

    // Check if the number is positive, negative, or zero
    if (number > 0) {
        printf("The number %.2lf is positive.\n", number);
    } else if (number < 0) {
        printf("The number %.2lf is negative.\n", number);
    } else {
        printf("The number is zero.\n");
    }

    return 0;
}
