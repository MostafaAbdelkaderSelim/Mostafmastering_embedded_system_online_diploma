#include <stdio.h>

int main() {
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d%d", &num1, &num2);

    int sum = num1 + num2;

    printf("Sum: %d\n", sum);

    return 0;
}
