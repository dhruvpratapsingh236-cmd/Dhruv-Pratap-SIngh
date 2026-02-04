 #include <stdio.h>

int main()
{
    int a,b;
    printf("Enter first no: \n");
    printf("Enter second no: \n");

    scanf("%d",&a);
    scanf("%d",&b);
    
    printf("addition is: %d \n",(a+b));
    printf("subtraction is is: %d \n",(a-b));
    printf("multiplication is: %d \n",(a*b));
    printf("division is: %d \n",(a/b));
    printf("modulus is: %d \n",(a%b));

 return 0;  
}