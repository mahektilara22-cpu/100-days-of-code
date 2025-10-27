/*
Find the longest word in a sentence.
*/

#include <stdio.h>
#include <string.h>

#define MAX 1024

int main() {
    char str[MAX];
    char longest[MAX];
    int maxLen = 0, currLen = 0, i, start = 0, maxStart = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    str[strcspn(str, "\n")] = 0;

    for(i = 0; ; i++) {
        if(str[i] != ' ' && str[i] != '\0') {
            if(currLen == 0) start = i;
            currLen++;
        } else {
            if(currLen > maxLen) {
                maxLen = currLen;
                maxStart = start;
            }
            currLen = 0;
        }
        if(str[i] == '\0') break;
    }

    strncpy(longest, str + maxStart, maxLen);
    longest[maxLen] = '\0';

    printf("Longest word: %s\n", longest);
    printf("Length: %d\n", maxLen);

    return 0;
}
