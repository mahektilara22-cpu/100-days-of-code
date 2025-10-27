//Print initials of a name with the surname displayed in full.

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter the full name: ");
    fgets(name, 100, stdin);

    int len = strlen(name);
    // Remove trailing newline if present
    if (name[len - 1] == '\n') {
        name[len - 1] = '\0';
        len--;
    }

    int last_space = -1;
    // Find the last space in the name for surname position
    for (int i = len - 1; i >= 0; i--) {
        if (name[i] == ' ') {
            last_space = i;
            break;
        }
    }

    // Print initials for all words before the surname
    for (int i = 0; i < len; i++) {
        if (i == 0 && name[i] != ' ') {
            printf("%c. ", toupper(name[i]));
        } else if (name[i] == ' ' && i + 1 < last_space) {
            printf("%c. ", toupper(name[i + 1]));
        }
    }

    // Print the surname in full, with proper casing
    if (last_space != -1 && last_space + 1 < len) {
        for (int i = last_space + 1; i < len; i++) {
            if (i == last_space + 1)
                printf("%c", toupper(name[i]));
            else
                printf("%c", tolower(name[i]));
        }
    }
    printf("\n");
    return 0;
}
