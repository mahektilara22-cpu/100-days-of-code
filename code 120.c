// Write a program to take a string input. Change it to sentence case.

#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1001];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    // Convert first non-space character to uppercase
    while (str[i] != '\0') {
        if (str[i] != ' ' && str[i] != '\n') {
            str[i] = toupper(str[i]);
            i++;
            break;
        }
        i++;
    }

    // Convert the rest to lowercase
    for (; str[i] != '\0'; i++) {
        str[i] = tolower(str[i]);
    }

    printf("%s", str);

    return 0;
}
