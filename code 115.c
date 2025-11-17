// Write a program to take two strings s and t as inputs (assume all characters are lowercase).
// The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies.
// Print "Anagram" if they are, otherwise "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    char s[1001], t[1001];
    printf("Enter the first string s: ");
    scanf("%1000s", s);
    printf("Enter the second string t: ");
    scanf("%1000s", t);

    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT) {
        printf("Not Anagram\n");
        return 0;
    }

    int freqS[26] = {0};
    int freqT[26] = {0};

    for (int i = 0; i < lenS; i++) {
        freqS[s[i] - 'a']++;
        freqT[t[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++) {
        if (freqS[i] != freqT[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
