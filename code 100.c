//Print all sub-strings of a string.

#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int len, i, j, k;
    
    // Read the input string
    printf("Enter a string: ");
    scanf("%s", str);
    
    len = strlen(str);
    printf("The substrings are:\n");
    
    // Outer loop for starting index
    for(i = 0; i < len; i++) {
        // Middle loop for ending index
        for(j = i; j < len; j++) {
            // Inner loop to print from i to j
            for(k = i; k <= j; k++) {
                printf("%c", str[k]);
            }
            printf("\n");
        }
    }
    return 0;
}
