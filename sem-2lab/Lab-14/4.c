// Demonstrate functions fseek() and rewind().
#include <stdio.h>

int main() {
    FILE *fp = fopen("seek_demo.txt", "w+");
    if (!fp) { printf("Error!\n"); return 1; }
    fprintf(fp, "Hello World from C!");

    // fseek to beginning and read
    fseek(fp, 0, SEEK_SET);
    char ch;
    printf("After fseek to start: ");
    while ((ch = fgetc(fp)) != EOF) putchar(ch);

    // fseek to 6th byte
    fseek(fp, 6, SEEK_SET);
    printf("\nAfter fseek to position 6: ");
    while ((ch = fgetc(fp)) != EOF) putchar(ch);

    // rewind
    rewind(fp);
    printf("\nAfter rewind: ");
    while ((ch = fgetc(fp)) != EOF) putchar(ch);
    printf("\n");

    fclose(fp);
    return 0;
}
