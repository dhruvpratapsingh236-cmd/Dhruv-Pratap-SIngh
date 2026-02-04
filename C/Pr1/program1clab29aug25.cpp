 #include <stdio.h>

int main()
{
    int age;
    char name[50];
    char adress[100];
    
    printf("Enter your name \n");
    printf("Enter your adress\n");
    printf("Enter your age\n");

    scanf("%s",name);
    scanf("%s",adress);
    scanf("%d",&age);

    printf("name is: %s\n",name);
    printf("adress is: %s\n",adress);
    printf("age is: %d\n",age);


  return 0;
}