/*
Ques: Check if a string is a palindrome.
*/

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, len, flag = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline caused by fgets
    len = strlen(str);
    if(len > 0 && str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for(i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1]) {
            flag = 1;
            break;
        }
    }

    if(flag)
        printf("%s is not a palindrome\n", str);
    else
        printf("%s is a palindrome\n", str);

    return 0;
}
