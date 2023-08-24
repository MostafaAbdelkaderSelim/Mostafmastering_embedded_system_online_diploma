#include <stdio.h>

int main() {
    char ch;

    
    printf("Enter a character: ");
    scanf(" %c", &ch);  

    // Convert the character to lowercase for case-insensitive comparison
    char lowercaseCh = tolower(ch);

    // Check if the character is a vowel
    if (lowercaseCh == 'a' || lowercaseCh == 'e' || lowercaseCh == 'i' || lowercaseCh == 'o' || lowercaseCh == 'u') {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}
