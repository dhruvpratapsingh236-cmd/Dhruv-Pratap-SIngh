/* q4.c */
#include <stdio.h>

int main() {
    int n;
    unsigned long long fact = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative integers.\n");
        return 0;
    }

    for (int i = 1; i <= n; ++i) {
        fact *= (unsigned long long)i;
    }

    printf("%d! = %llu\n", n, fact);
    return 0;
}
