// Remove all vowels from a string 

#include <stdio.h>
#include <string.h>

int isVowel(char c) {
    char lower = c | 32; // convert to lowercase
    return (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u');
}

void removeVowels(char *str) {
    int i = 0, j = 0;
    int len = strlen(str);

    while (i < len) {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from fgets input if present
    str[strcspn(str, "\n")] = 0;

    removeVowels(str);
    printf("String after removing vowels: %s\n", str);

    return 0;
}
