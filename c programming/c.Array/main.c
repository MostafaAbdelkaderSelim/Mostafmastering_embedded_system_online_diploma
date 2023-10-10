#include <stdio.h>

int main() {
    double matrix1[2][2], matrix2[2][2], sum[2][2];
    int i, j;

    printf("Enter the elements of the 1st matrix:\n");

    // Input for the 1st matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter a%d%d: ", i + 1, j + 1);
            scanf("%lf", &matrix1[i][j]);
        }
    }

    printf("\nEnter the elements of the 2nd matrix:\n");

    // Input for the 2nd matrix
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("Enter b%d%d: ", i + 1, j + 1);
            scanf("%lf", &matrix2[i][j]);
        }
    }

    // Calculate the sum of the matrices
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    // Display the sum matrix
    printf("\nSum of the matrices:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%.2lf\t", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
