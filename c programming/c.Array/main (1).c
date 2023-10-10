#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    printf("Enter the number of data: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Please enter a positive number of data.\n");
        return 1; // Exit with an error code
    }

    double data[n];

    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%lf", &data[i]);
        sum += data[i];
    }

    double average = sum / n;

    printf("Average = %.2lf\n", average);

    return 0;
}
