#include <stdio.h>

int main() {
    char str[100];
    char character;
    int frequency = 0;

    printf("Enter a string: ");
    gets(str); // You can also use fgets() for safer input handling

    printf("Enter a character to find frequency: ");
    scanf(" %c", &character); // Use a space before %c to skip any leading whitespace

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == character) {
            frequency++;
        }
    }

    printf("Frequency of %c = %d\n", character, frequency);

    return 0;
}
