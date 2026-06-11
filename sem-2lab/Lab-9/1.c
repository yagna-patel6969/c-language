// Print value and address of a variable.
#include <stdio.h>

int main() {
    int x = 42;
    float f = 3.14;
    char c = 'A';
    printf("int    value: %d,  address: %p\n", x, (void*)&x);
    printf("float  value: %.2f, address: %p\n", f, (void*)&f);
    printf("char   value: %c,   address: %p\n", c, (void*)&c);
    return 0;
}
