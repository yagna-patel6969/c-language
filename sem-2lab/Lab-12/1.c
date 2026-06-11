// Allocate and de-allocate memory for int, char and float variables at run time.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *pi = (int *)malloc(sizeof(int));
    float *pf = (float *)malloc(sizeof(float));
    char *pc = (char *)malloc(sizeof(char));

    *pi = 42;
    *pf = 3.14f;
    *pc = 'A';

    printf("int   : %d  (address: %p)\n", *pi, (void*)pi);
    printf("float : %.2f (address: %p)\n", *pf, (void*)pf);
    printf("char  : %c   (address: %p)\n", *pc, (void*)pc);

    free(pi); free(pf); free(pc);
    printf("Memory deallocated successfully.\n");
    return 0;
}
