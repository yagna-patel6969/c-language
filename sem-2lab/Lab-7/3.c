// Read data of N students. Arrange student data alphabetically and print all data.
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n], temp;
    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", s[i].name);
        printf("  Percentage: "); scanf("%f", &s[i].percentage);
        printf("  Age: "); scanf("%d", &s[i].age);
    }
    // Bubble sort by name
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (strcmp(s[j].name, s[j + 1].name) > 0) {
                temp = s[j]; s[j] = s[j + 1]; s[j + 1] = temp;
            }
    printf("\n--- Students (Alphabetically Sorted) ---\n");
    for (int i = 0; i < n; i++)
        printf("Name: %-20s | Percentage: %.2f | Age: %d\n", s[i].name, s[i].percentage, s[i].age);
    return 0;
}
