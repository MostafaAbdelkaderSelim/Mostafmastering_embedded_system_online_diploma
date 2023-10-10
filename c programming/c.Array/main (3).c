#include <stdio.h>

int main() {
    int n, i, element, location;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Invalid input. Number of elements must be positive.\n");
        return 1; // Exit with an error code
    }

    int arr[n + 1]; // Create an array of size n+1 to accommodate the new element

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    printf("Enter the location (1 to %d): ", n + 1);
    scanf("%d", &location);

    if (location < 1 || location > n + 1) {
        printf("Invalid location. Please enter a valid location.\n");
        return 1; // Exit with an error code
    }

    // Shift elements to the right to accommodate the new element
    for (i = n; i >= location; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element at the specified location
    arr[location - 1] = element;

    printf("Array after insertion:\n");
    for (i = 0; i <= n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
