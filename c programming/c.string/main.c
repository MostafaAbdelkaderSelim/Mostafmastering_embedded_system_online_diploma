#include <stdio.h>

int main() {
    char str[100];
    int length = 0;

    printf("Enter a string: ");
    gets(str); // You can also use fgets() for safer input handling

    // Calculate the length of the string manually
    while (str[length] != '\0') {
        length++;
    }

    printf("Length of string: %d\n", length);

    return 0;
}
