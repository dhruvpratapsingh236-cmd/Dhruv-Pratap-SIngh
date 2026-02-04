#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, spaces = 0, tabs = 0, lines = 0;

    // Open the file from SAME FOLDER
    fp = fopen("input.txt", "r");

    if (fp == NULL) {
        printf("File not found!\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == ' ')
            spaces++;
        else if (ch == '\t')
            tabs++;
        else if (ch == '\n')
            lines++;
    }

    fclose(fp);

    printf("Total Characters: %d\n", characters);
    printf("Total Spaces: %d\n", spaces);
    printf("Total Tabs: %d\n", tabs);
    printf("Total Lines: %d\n", lines);

    return 0;
}
