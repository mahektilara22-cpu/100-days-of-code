/*
Write a C program that opens an existing file (e.g., info.txt) and reads its contents using fgets(). 
The program should print all the lines to the console until EOF (end of file) is reached.
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char line[256]; // buffer for each line

    // Open the file in read mode
    file = fopen("info.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
