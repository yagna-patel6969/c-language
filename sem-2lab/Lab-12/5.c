// Allocate dynamic memory for a structure variable.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));
    if (s == NULL) { printf("Memory allocation failed!\n"); return 1; }
    printf("Enter Roll No: "); scanf("%d", &s->roll);
    printf("Enter Name: "); scanf(" %[^\n]", s->name);
    printf("Enter Marks: "); scanf("%f", &s->marks);
    printf("\n--- Student Details ---\n");
    printf("Roll : %d\nName : %s\nMarks: %.2f\n", s->roll, s->name, s->marks);
    free(s);
    return 0;
}
