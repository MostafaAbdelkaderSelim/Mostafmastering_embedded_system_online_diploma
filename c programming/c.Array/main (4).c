#include <stdio.h>

int main() {
    int n, i, element, found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1; // Exit with an error code
    }

    int arr[n];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be searched: ");
    scanf("%d", &element);

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = 1;
            printf("Number found at the location = %d\n", i + 1);
            break;
        }
    }

    if (!found) {
        printf("Number not found in the array.\n");
    }

    return 0;
}
