//Write a C program to perform basic arithmetic operations (+,-,*,/) using switch-case .
#include <stdio.h>
int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    printf("Enter your choice (1. Add, 2. Subtract, 3. Multiply, 4. Divide): ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Sum: %d\n", num1 + num2);
            break;
        case 2:
            printf("Difference: %d\n", num1 - num2);
            break;
        case 3:
            printf("Product: %d\n", num1 * num2);
            break;
        case 4:
            if (num2 != 0) {
                printf("Quotient: %d\n", num1 / num2);
            } else {
                printf("Error: Division by zero.\n");
                break;
            }
        default:
        printf("Invalid choice.\n");
        break;
    }
}