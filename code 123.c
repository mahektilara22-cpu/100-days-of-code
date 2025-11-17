/*
Read a text file and count the total number of characters, words, and lines.
A word is defined as a sequence of non-space characters separated by spaces or newlines.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    int characters = 0, words = 0, lines = 0;
    int in_word = 0;
    int c;

    while ((c = fgetc(file)) != EOF) {
        characters++;

        if (c == '\n') {
            lines++;
        }

        if (isspace(c)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    // If file is not empty and last line doesn't end with newline, count that line
    if (characters > 0 && c != '\n') {
        lines++;
    }

    fclose(file);

    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
