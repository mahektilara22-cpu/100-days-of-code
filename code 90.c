/*
Toggle case of each character in a string.
*/

#include <stdio.h>

int main() {
    char str[200];
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            // convert lowercase to uppercase
            str[i] = str[i] - ('a' - 'A');
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            // convert uppercase to lowercase
            str[i] = str[i] + ('a' - 'A');
        }
        i++;
    }

    printf("Toggled case string: %s", str);

    return 0;
}
