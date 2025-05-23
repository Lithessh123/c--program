#include <stdio.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    char operator;
    double num1, num2, result;

    // Prompt user for input
    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    // Perform operation based on user input
    switch (operator) {
        case '+':
            result = add(num1, num2);
            break;
        case '-':
            result = subtract(num1, num2);
            break;
        case '*':
            result = multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0)
                result = divide(num1, num2);
            else {
                printf("Error! Division by zero is not allowed.\n");
                return 1;
            }
            break;
        default:
            printf("Invalid operator!\n");
            return 1;
    }

    // Print result
    printf("Result: %.2lf\n", result);
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}