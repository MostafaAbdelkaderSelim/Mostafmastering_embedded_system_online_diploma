#include <stdio.h>

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    int asciiValue = character;

    printf("ASCII value of %c = %d\n", character, asciiValue);

    return 0;
}
