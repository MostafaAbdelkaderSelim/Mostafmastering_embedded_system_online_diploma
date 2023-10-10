#include <stdio.h>
#include <string.h>

void reverseSentence() {
    char c;

    // Read the next character
    scanf("%c", &c);

    // Base case: Stop when a newline character is encountered
    if (c == '\n') {
        return;
    }

    // Recursively call reverseSentence() before printing
    reverseSentence();

    // Print the character after the recursion unwinds
    printf("%c", c);
}

int main() {
    printf("Enter a sentence: ");
    fflush(stdin); // Clear any remaining characters in the input buffer
    reverseSentence();

    return 0;
}
