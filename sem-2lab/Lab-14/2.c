// Demonstrate functions fprintf(), fscanf(), fputc(), fgetc().
#include <stdio.h>

int main() {
    FILE *fp;

    // fprintf and fputc - write
    fp = fopen("demo.txt", "w");
    if (!fp) { printf("Error!\n"); return 1; }
    fprintf(fp, "Name: Alice\nAge: 20\n");
    fputc('Z', fp);
    fclose(fp);

    // fscanf and fgetc - read
    fp = fopen("demo.txt", "r");
    if (!fp) { printf("Error!\n"); return 1; }
    char name[20]; int age;
    fscanf(fp, "Name: %s\nAge: %d\n", name, &age);
    printf("Read via fscanf -> Name: %s, Age: %d\n", name, age);
    char ch = fgetc(fp);
    printf("Read via fgetc -> char: %c\n", ch);
    fclose(fp);
    return 0;
}
