/*
Open an existing file in append mode and allow the user to enter a new line of text.
Append the text at the end without overwriting existing content.
*/

#include <stdio.h>

int main() {
    char filename[260];
    char input[1024];

    printf("Enter filename to append to: ");
    if (scanf("%259s", filename) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Clear input buffer before fgets
    while (getchar() != '\n');

    printf("Enter the text to append:\n");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        fclose(file);
        return 1;
    }

    fputs(input, file);
    fclose(file);

    printf("Text appended successfully.\n");

    return 0;
}
