#include <stdio.h>

int main () {
    int age;
    printf("Enter age : ");
    scanf("%d",&age);

    if(age>18){
        printf("Adult \n");
        printf("They can Drive \n");
        printf("They can Vote \n");
    }
    else{
        printf("not an Adult\n");
    }   
    printf("Thank You \n");
    return 0;
}


// #include <stdio.h>

// int main() {
//     int age;
//     printf("Enter age : ");
//     scanf("%d",&age);

//     age >= 18 ? printf("Adult") : printf("Not adult") ;

//     return 0;
// }