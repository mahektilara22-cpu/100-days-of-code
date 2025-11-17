// Write a program to take a string s as input.
// The task is to find the length of the longest substring without repeating characters.
// Print the length as output.

#include <stdio.h>
#include <string.h>

#define CHAR_RANGE 256

int longestNonRepeatingSubstringLength(char *s) {
    int n = strlen(s);
    int lastIndex[CHAR_RANGE];
    for (int i = 0; i < CHAR_RANGE; i++) {
        lastIndex[i] = -1;  // initialize last indices as -1
    }

    int maxLength = 0;
    int start = 0;  // start index of current substring without repetition

    for (int i = 0; i < n; i++) {
        unsigned char ch = s[i];
        if (lastIndex[ch] >= start) {
            start = lastIndex[ch] + 1;
        }
        lastIndex[ch] = i;
        int currLength = i - start + 1;
        if (currLength > maxLength) {
            maxLength = currLength;
        }
    }

    return maxLength;
}

int main() {
    char s[1001];
    printf("Enter the string: ");
    scanf("%1000s", s);

    int length = longestNonRepeatingSubstringLength(s);
    printf("%d\n", length);

    return 0;
}
