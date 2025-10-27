/*
Ques: Reverse a string.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int start, end;
    char temp;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline from fgets, if present
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    start = 0;
    end = len - 1;

    // Swap characters from start and end moving toward the center
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
