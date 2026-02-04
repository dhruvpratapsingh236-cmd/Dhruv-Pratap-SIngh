#include <stdio.h>

int main() {
    int i, j;

    for(i = 1; i <= 10; i++) {          // outer loop for rows
        for(j = 1; j <= 10; j++) {      // inner loop for columns
            printf("%4d", i * j);       // print product
        }
        printf("\n");                   // new line after each row
    }

    return 0;
}
