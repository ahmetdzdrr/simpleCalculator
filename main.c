#include <stdio.h>
#include <stdlib.h>

int main()
{
    char operator;
    double num1, num2, result;
    int choice;

    do {
        printf("\nChoose an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        if (choice != 5) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);

            switch(choice)
            {
                case 1:
                    operator = '+';
                    result = num1 + num2;
                    break;

                case 2:
                    operator = '-';
                    result = num1 - num2;
                    break;

                case 3:
                    operator = '*';
                    result = num1 * num2;
                    break;

                case 4:
                    operator = '/';
                    if (num2 == 0) {
                        printf("Error: division by zero\n");
                        continue;
                    } else {
                        result = num1 / num2;
                    }
                    break;

                default:
                    printf("Invalid choice, please try again\n");
                    continue;
            }

            printf("%.2lf %c %.2lf = %.2lf\n", num1, operator, num2, result);
        }
    } while (choice != 5);

    printf("Goodbye!\n");
    return 0;
}

