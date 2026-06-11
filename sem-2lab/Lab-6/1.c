// Create, declare and initialise the structure employee.
#include <stdio.h>

struct Employee {
    int id;
    char name[50];
    float salary;
};

int main() {
    struct Employee emp = {101, "John Doe", 55000.0};
    printf("Employee ID   : %d\n", emp.id);
    printf("Employee Name : %s\n", emp.name);
    printf("Employee Salary: %.2f\n", emp.salary);
    return 0;
}
