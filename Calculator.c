#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }
int modulus(int a, int b) { return a % b; }

int main()
{
    int num1, num2, result, choice;

    while (1)
    {
        printf("\n--- Calculator Menu ---\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Modulus (%%)\n");
        printf("0. Quit\n");
        printf("Enter your choice: ");
        scanf(" %d", &choice);

        if (choice == 0)
        {
            printf("Exiting calculator, Goodbye!!!\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%d%d", &num1, &num2);

        switch (choice)
        {
        case 1:
            result = add(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 2:
            result = subtract(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 3:
            result = multiply(num1, num2);
            printf("Result: %d\n", result);
            break;
        case 4:
            if (num2 == 0)
                printf("Error! Division by zero not possible.\n");
            else
            {
                result = divide(num1, num2);
                printf("Result: %d\n", result);
            }
            break;
        case 5:
            if (num2 == 0)
                printf("Error! Division by zero not possible.\n");
            else
            {
                result = modulus(num1, num2);
                printf("Result: %d\n", result);
            }
            break;
        default:
            printf("Invalid choice! Please select from the menu.\n");
        }
        printf("\n");
    }
    return 0;
}