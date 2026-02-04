#include <stdio.h>

int main() {
    int n, i;
    double fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0)
        printf("Factorial does not exist");
    else {
        for (i = 1; i <= n; i++)
            fact = fact * i;
        printf("Factorial is %lf", fact);
    }

    return 0;
}