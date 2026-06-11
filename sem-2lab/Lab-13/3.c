// Define a function-like Macro PRINT that prints the given integer argument.
#include <stdio.h>

#define PRINT(x) printf("Value of " #x " = %d\n", x)

int main() {
    int a = 10, b = 25, c = 100;
    PRINT(a);
    PRINT(b);
    PRINT(c);
    PRINT(a + b);
    return 0;
}
