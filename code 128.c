/*
Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.
*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file = fopen("input.txt", "r");
    if (file == NULL) {
        perror("Error opening input.txt");
        return 1;
    }

    int vowels = 0, consonants = 0;
    int ch;

    while ((ch = fgetc(file)) != EOF) {
        if (isalpha(ch)) { // consider only alphabetic characters
            ch = tolower(ch);
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    fclose(file);

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}
