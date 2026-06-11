// Get current time using __TIME__.
#include <stdio.h>

int main() {
    printf("Compilation time: %s\n", __TIME__);
    printf("Compilation date: %s\n", __DATE__);
    printf("File name: %s\n", __FILE__);
    printf("Line number: %d\n", __LINE__);
    return 0;
}
