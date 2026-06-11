// Read data of N students. Print details of student with maximum percentage.
#include <stdio.h>

struct Student {
    char name[50];
    float percentage;
    int age;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter details for Student %d:\n", i + 1);
        printf("  Name: "); scanf(" %[^\n]", s[i].name);
        printf("  Percentage: "); scanf("%f", &s[i].percentage);
        printf("  Age: "); scanf("%d", &s[i].age);
    }
    int maxIdx = 0;
    for (int i = 1; i < n; i++)
        if (s[i].percentage > s[maxIdx].percentage) maxIdx = i;
    printf("\nStudent with maximum percentage:\n");
    printf("Name: %s | Percentage: %.2f | Age: %d\n", s[maxIdx].name, s[maxIdx].percentage, s[maxIdx].age);
    return 0;
}
