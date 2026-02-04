#include <stdio.h>
int main()
{
    int n, i, count = 0;
    printf("Enter a number");
    scanf("%d", &n);

    if (n <= 1)
        printf("number is not prime");
    else
    {
        for (i = 1; i <= n; i++)
        {
            if (n % i == 0)
                count++;
        }

        if (count == 2)
            printf("prime no.");
        else
            printf("Not a prime no");
    }
    return 0;
}
