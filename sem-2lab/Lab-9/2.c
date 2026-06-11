// Demonstrate int, float, double and char pointer.
#include <stdio.h>

int main() {
    int i = 10;
    float f = 3.14f;
    double d = 3.14159;
    char c = 'Z';

    int *pi = &i;
    float *pf = &f;
    double *pd = &d;
    char *pc = &c;

    printf("int    : value = %d,  pointer = %p, size = %lu\n", *pi, (void*)pi, sizeof(pi));
    printf("float  : value = %.2f, pointer = %p, size = %lu\n", *pf, (void*)pf, sizeof(pf));
    printf("double : value = %.5lf, pointer = %p, size = %lu\n", *pd, (void*)pd, sizeof(pd));
    printf("char   : value = %c,   pointer = %p, size = %lu\n", *pc, (void*)pc, sizeof(pc));
    return 0;
}
