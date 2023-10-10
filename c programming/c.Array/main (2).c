#include <stdio.h>

int main() {
    int rows, cols, i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    if (rows <= 0 || cols <= 0) {
        printf("Invalid input. Rows and columns must be positive integers.\n");
        return 1; // Exit with an error code
    }

    double matrix[rows][cols];

    printf("Enter the elements of the matrix:\n");

    // Input for the matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter element at row %d, column %d: ", i + 1, j + 1);
            scanf("%lf", &matrix[i][j]);
        }
    }

    // Calculate and display the transpose of the matrix
    printf("\nTranspose of the matrix:\n");
    for (j = 0; j < cols; j++) {
        for (i = 0; i < rows; i++) {
            printf("%.2lf\t", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}
