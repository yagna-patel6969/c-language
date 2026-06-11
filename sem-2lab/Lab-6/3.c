// Demonstrate the difference between structure and union.
#include <stdio.h>

struct SampleStruct {
    int i;
    float f;
    char c;
};

union SampleUnion {
    int i;
    float f;
    char c;
};

int main() {
    struct SampleStruct s;
    union SampleUnion u;

    printf("Size of struct: %lu bytes\n", sizeof(s));
    printf("Size of union : %lu bytes\n", sizeof(u));

    s.i = 10; s.f = 3.14; s.c = 'A';
    printf("\nStruct members (all stored separately):\n");
    printf("  s.i = %d, s.f = %.2f, s.c = %c\n", s.i, s.f, s.c);

    u.i = 10;
    printf("\nUnion after assigning u.i = 10:\n");
    printf("  u.i = %d\n", u.i);
    u.f = 3.14;
    printf("Union after assigning u.f = 3.14 (overwrites u.i):\n");
    printf("  u.f = %.2f\n", u.f);
    u.c = 'A';
    printf("Union after assigning u.c = 'A' (overwrites u.f):\n");
    printf("  u.c = %c\n", u.c);

    return 0;
}
