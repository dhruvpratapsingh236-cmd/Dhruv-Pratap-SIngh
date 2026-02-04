#include <stdio.h>

int main () {
    int x;
    //Enen = 1
    //Odd = 0
    printf("Enter a number : ");
    scanf("%d",&x);
    printf("%d",x%2==0);
    return 0;
}