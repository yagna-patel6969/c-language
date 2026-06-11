// Create structure student with name, percentage and age.
// Read data of 5 students using array of structure.
#include <stdio.h>

struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    struct Student s[5];
    for (int i = 0; i < 5; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", s[i].name);
        printf("  Percentage: "); scanf("%f", &s[i].percentage);
        printf("  Age: "); scanf("%d", &s[i].age);
    }
    printf("\n--- Student Details ---\n");
    for (int i = 0; i < 5; i++)
        printf("Name: %-20s | Percentage: %.2f | Age: %d\n", s[i].name, s[i].percentage, s[i].age);
    return 0;
}
