/*
Take two filenames from the user – a source file and a destination file. 
Copy all the content from the source file to the destination file using fgetc() and fputc().
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFile[260], destFile[260];
    FILE *src, *dest;
    int ch;

    printf("Enter source filename: ");
    if (scanf("%259s", sourceFile) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter destination filename: ");
    if (scanf("%259s", destFile) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    src = fopen(sourceFile, "r");
    if (src == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    dest = fopen(destFile, "w");
    if (dest == NULL) {
        printf("Error opening/creating destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}
