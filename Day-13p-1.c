#include <stdio.h>

int main() {
    double num1, num2, result;
    char op;

    printf("Enter expression (num1 num2 operator): ");
    scanf("%lf %lf %c", &num1, &num2, &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("%g\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("%g\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("%g\n", result);
            break;

        case '/':
            if (num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                result = num1 / num2;
                printf("%g\n", result);
            }
            break;

        case '%':
            // modulus works on integers
            if ((int)num2 == 0) {
                printf("Error: Division by zero\n");
            } else {
                printf("%d\n", (int)num1 % (int)num2);
            }
            break;

        default:
            printf("Error: Invalid operator\n");
    }

    return 0;
}