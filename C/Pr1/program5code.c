#include <stdio.h>

int main() 
{
    double a, b;
    char op;

    printf("Enter values a & b: ");
    scanf("%lf %lf", &a, &b);

    printf("Enter operator: ");
    scanf(" %c", &op);

    switch(op)
    {
        case '+':
            printf("Result = %lf", a + b);
            break;

        case '-':
            printf("Result = %lf", a - b);
            break;

        case '*':
            printf("Result = %lf", a * b);
            break;

        case '/':
            if(b != 0)
            {
                printf("Result = %lf", a / b);
            }
            else
            {
                printf("Error: division by zero");
            }
            break;

        default:
            printf("Invalid operator");
    }

    return 0;
}
