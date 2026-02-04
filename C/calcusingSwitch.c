#include <stdio.h>

void printHeader() {
    printf("\n");
    printf("╔════════════════════════════════════╗\n");
    printf("║     🧮 SIMPLE CALCULATOR 🧮       ║\n");
    printf("╚════════════════════════════════════╝\n");
    printf("Operators: + (Add), - (Subtract)\n");
    printf("           * (Multiply), / (Divide), %% (Modulus)\n");
    printf("════════════════════════════════════\n\n");
}

void printResult(int a, char op, int b, double result, int isError) {
    if (isError) {
        printf("\n❌ ERROR: %s\n", (char*)&result);
        return;
    }
    
    printf("\n┌────────────────────────┐\n");
    printf("│     CALCULATION        │\n");
    printf("├────────────────────────┤\n");
    printf("│  %d %c %d = ", a, op, b);
    
    if (op == '/' || op == '%') {
        if (op == '/') {
            printf("%.2f\n", result);
        } else {
            printf("%d\n", (int)result);
        }
    } else {
        printf("%d\n", (int)result);
    }
    printf("└────────────────────────┘\n\n");
}

int main() {
    int a, b;
    char op;
    double result = 0;
    int isError = 0;

    printHeader();

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op) {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if (b != 0)
                result = (double)a / b;
            else {
                printf("\n❌ ERROR: Division by zero not allowed!\n\n");
                return 0;
            }
            break;

        case '%':
            if (b != 0)
                result = a % b;
            else {
                printf("\n❌ ERROR: Modulus by zero not allowed!\n\n");
                return 0;
            }
            break;

        default:
            printf("\n❌ ERROR: Invalid operator '%c'!\n\n", op);
            return 0;
    }

    printResult(a, op, b, result, isError);
    return 0;
}
