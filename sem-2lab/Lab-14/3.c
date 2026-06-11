// Count chars, spaces, tabs and new lines in a file.
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[100];
    printf("Enter filename: ");
    scanf("%s", filename);
    fp = fopen(filename, "r");
    if (!fp) { printf("Cannot open file!\n"); return 1; }
    int chars = 0, spaces = 0, tabs = 0, newlines = 0;
    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        chars++;
        if (ch == ' ') spaces++;
        else if (ch == '\t') tabs++;
        else if (ch == '\n') newlines++;
    }
    fclose(fp);
    printf("Characters: %d\nSpaces: %d\nTabs: %d\nNew lines: %d\n",
           chars, spaces, tabs, newlines);
    return 0;
}
