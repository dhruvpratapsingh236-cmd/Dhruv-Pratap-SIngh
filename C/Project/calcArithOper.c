/* q2.c */
#include <stdio.h>

int main() {
    int a, b;

    printf("Enter first integer: ");
    scanf("%d", &a);
    printf("Enter second integer: ");
    scanf("%d", &b);

    printf("\nResults:\n");
    printf("%d + %d = %d\n", a, b, a + b);
    printf("%d - %d = %d\n", a, b, a - b);
    printf("%d * %d = %d\n", a, b, a * b);

    if (b != 0) {
        printf("%d / %d = %d (integer division)\n", a, b, a / b);
        printf("%d %% %d = %d\n", a, b, a % b);
    } else {
        printf("Division and modulus by zero are undefined.\n");
    }

    return 0;
}
