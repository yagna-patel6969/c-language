// Demonstrate nested structure.
#include <stdio.h>

struct Date {
    int day, month, year;
};

struct Employee {
    int id;
    char name[50];
    struct Date dob;
};

int main() {
    struct Employee emp;
    printf("Enter Employee ID: "); scanf("%d", &emp.id);
    printf("Enter Name: "); scanf(" %[^\n]", emp.name);
    printf("Enter DOB (dd mm yyyy): ");
    scanf("%d %d %d", &emp.dob.day, &emp.dob.month, &emp.dob.year);

    printf("\n--- Employee Details ---\n");
    printf("ID  : %d\n", emp.id);
    printf("Name: %s\n", emp.name);
    printf("DOB : %02d/%02d/%04d\n", emp.dob.day, emp.dob.month, emp.dob.year);
    return 0;
}
