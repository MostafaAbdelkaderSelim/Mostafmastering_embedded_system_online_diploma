#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter a positive integer (n): ");
    scanf("%d", &n);

    // Check if n is positive
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
        // Exit the program with an error code
    }

    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
