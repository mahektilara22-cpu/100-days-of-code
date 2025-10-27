//Reverse each word in a sentence without changing the word order.


#include <stdio.h>
#include <string.h>

void reverse(char *start, char *end) {
    char temp;
    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

void reverseWords(char *str) {
    char *word_start = NULL;
    char *temp = str;

    while (*temp) {
        if ((word_start == NULL) && (*temp != ' '))
            word_start = temp;
        if (word_start && (*(temp + 1) == ' ' || *(temp + 1) == '\0')) {
            reverse(word_start, temp);
            word_start = NULL;
        }
        temp++;
    }
}

int main() {
    char str[] = "Hello world from C";
    reverseWords(str);
    printf("%s\n", str);
    return 0;
}
