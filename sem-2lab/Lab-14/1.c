// Create, open and close a file.
#include <stdio.h>

int main() {
    FILE *fp;
    // Create/open file for writing
    fp = fopen("sample.txt", "w");
    if (fp == NULL) { printf("Error opening file!\n"); return 1; }
    fprintf(fp, "Hello, File Handling in C!\n");
    printf("File created and written successfully.\n");
    fclose(fp);
    printf("File closed.\n");

    // Open for reading
    fp = fopen("sample.txt", "r");
    if (fp == NULL) { printf("Error opening file!\n"); return 1; }
    char line[100];
    printf("File content: ");
    while (fgets(line, sizeof(line), fp)) printf("%s", line);
    fclose(fp);
    printf("File closed again.\n");
    return 0;
}
