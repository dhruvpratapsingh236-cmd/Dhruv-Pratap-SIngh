#include <stdio.h>

struct student {
    int rollno;
    char name[50];
    float marks;
};

int main() {
    struct student s[5];
    int i;

    // Accepting data
    for(i = 0; i < 5; i++) {
        printf("Enter name, roll number, and marks of student %d:\n", i+1);
        scanf("%s %d %f", s[i].name, &s[i].rollno, &s[i].marks);
    }

    // Displaying data
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("%s\t%d\t%.2f\n", s[i].name, s[i].rollno, s[i].marks);
    }

    return 0;
}
