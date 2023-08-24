#include <stdio.h>

int main() {
    char operator;
    double operand1, operand2, result;

    printf("Enter an arithmetic operator (+, -, *, /): ");
    scanf(" %c", &operator); /
    printf("Enter the first operand: ");
    scanf("%lf", &operand1);

    printf("Enter the second operand: ");
    scanf("%lf", &operand2);

    switch (operator) {
        case '+':
            result = operand1 + operand2;
            break;
        case '-':
            result = operand1 - operand2;
            break;
        case '*':
            result = operand1 * operand2;
            break;
        case '/':
            // Check for division by zero
            if (operand2 == 0) {
                printf("Error: Division by zero is not allowed.\n");
                return 1; 
                // Exit the program with an error code
            }
            result = operand1 / operand2;
            break;
        default:
            printf("Error: Invalid operator entered.\n");
            return 1;
            // Exit the program with an error code
    }

    printf("Result: %.2lf %c %.2lf = %.2lf\n", operand1, operator, operand2, result);

    return 0;
}
