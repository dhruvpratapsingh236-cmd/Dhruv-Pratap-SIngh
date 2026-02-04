#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int n, i, sum = 0;

    printf("Enter how many integers you want to store: ");
    scanf("%d", &n);

    // Allocating memory
    arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Sum of integers = %d\n", sum);

    free(arr);  // Free allocated memory

    return 0;
}
