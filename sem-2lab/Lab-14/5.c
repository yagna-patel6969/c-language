// Copy one file to another file.
#include <stdio.h>

int main() {
    char src[100], dest[100];
    printf("Enter source filename: "); scanf("%s", src);
    printf("Enter destination filename: "); scanf("%s", dest);
    FILE *fs = fopen(src, "r");
    if (!fs) { printf("Cannot open source file!\n"); return 1; }
    FILE *fd = fopen(dest, "w");
    if (!fd) { printf("Cannot open destination file!\n"); fclose(fs); return 1; }
    char ch;
    while ((ch = fgetc(fs)) != EOF) fputc(ch, fd);
    fclose(fs); fclose(fd);
    printf("File copied successfully from '%s' to '%s'.\n", src, dest);
    return 0;
}
