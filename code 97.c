/* 
 print the initials of a name.
*/

#include <stdio.h>
#include <ctype.h>

void printInitials(char* name) {
    // Print the first character in uppercase if it's a letter
    if (name[0] != ' ' && name[0] != '\0')
        printf("%c ", toupper(name[0]));

    // Traverse the rest of the string
    for (int i = 1; name[i] != '\0'; i++) {
        if (name[i - 1] == ' ' && name[i] != ' ') {
            // Print uppercase of every character that follows a space
            printf("%c ", toupper(name[i]));
        }
    }
}

int main() {
    char name[100];
    printf("Enter the name: ");
    fgets(name, 100, stdin);
    printf("Initials: ");
    printInitials(name);
    return 0;
}
