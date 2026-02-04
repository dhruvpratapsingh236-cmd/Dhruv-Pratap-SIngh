#include <stdio.h>

struct student {
    int m1, m2, m3;
};

// Function to calculate average
float find_avg(struct student s) {
    float avg = (s.m1 + s.m2 + s.m3) / 3.0;
    return avg;
}

int main() {
    struct student s;
    float avg;

    printf("Enter marks in 3 subjects: ");
    scanf("%d %d %d", &s.m1, &s.m2, &s.m3);

    avg = find_avg(s);

    printf("Average = %.2f\n", avg);

    return 0;
}
