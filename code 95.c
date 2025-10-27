//Check if one string is a rotation of another.

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int areRotations(char *str1, char *str2) {
    int size1 = strlen(str1);
    int size2 = strlen(str2);

    if (size1 != size2)
        return 0;

    char *temp = (char *)malloc(sizeof(char) * (size1 * 2 + 1));
    temp[0] = '\0';

    strcat(temp, str1);
    strcat(temp, str1);

    int result = (strstr(temp, str2) != NULL);

    free(temp); // Free dynamically allocated memory

    return result;
}

int main() {
    char str1[] = "abcd";
    char str2[] = "cdab";

    if (areRotations(str1, str2))
        printf("Strings are rotations of each other\n");
    else
        printf("Strings are not rotations of each other\n");

    return 0;
}
