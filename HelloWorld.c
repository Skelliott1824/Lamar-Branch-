#include <stdio.h>

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Add\n");
        printf("2. Subtract\n");
        printf("3. Multiply\n");
        printf("4. Divide\n");
        printf("5. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);

        if (choice == 5) {
            printf("Goodbye!\n");
            break;
        }

        printf("Enter first number: ");
        scanf("%lf", &num1);
        printf("Enter second number: ");
        scanf("%lf", &num2);

        switch (choice) {
            case 1:
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                if (num2 == 0)
                    printf("Error: Division by zero!\n");
                else {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                }
                break;
            default:
                printf("Invalid option! Please try again.\n");
        }
    }

    return 0;
}


