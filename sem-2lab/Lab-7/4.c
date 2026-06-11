// Structure student with roll number, name and marks of 3 subjects.
// Read data of N students. Calculate total and percentage.
// Print top 3 students and class average percentage.
#include <stdio.h>
#include <string.h>

struct Student {
    int roll;
    char name[50];
    float marks[3];
    float total;
    float percentage;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct Student s[n];
    for (int i = 0; i < n; i++) {
        printf("Enter Roll No: "); scanf("%d", &s[i].roll);
        printf("Enter Name: "); scanf(" %[^\n]", s[i].name);
        s[i].total = 0;
        for (int j = 0; j < 3; j++) {
            printf("Enter marks for subject %d: ", j + 1);
            scanf("%f", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }
        s[i].percentage = (s[i].total / 300.0) * 100;
    }
    // Sort by total descending
    struct Student temp;
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (s[j].total < s[j + 1].total) {
                temp = s[j]; s[j] = s[j + 1]; s[j + 1] = temp;
            }
    printf("\n--- Top 3 Students ---\n");
    int top = (n < 3) ? n : 3;
    for (int i = 0; i < top; i++)
        printf("Roll: %d | Name: %-20s | Total: %.2f | Percentage: %.2f%%\n",
               s[i].roll, s[i].name, s[i].total, s[i].percentage);
    float avgPct = 0;
    for (int i = 0; i < n; i++) avgPct += s[i].percentage;
    printf("\nClass Average Percentage: %.2f%%\n", avgPct / n);
    return 0;
}
