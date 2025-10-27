
//Change the date format from dd/04/yyyy to dd-Apr-yyyy.


#include <stdio.h>

int main() {
    char input[15];       // To store input date string
    char output[15];      // To store output date string
    int day, year;
    
    // Read the date string in dd/04/yyyy format
    printf("Enter date in dd/04/yyyy format: ");
    scanf("%2d/04/%4d", &day, &year);  // Reads day and year, assumes month 04

    // Format it as dd-Apr-yyyy
    sprintf(output, "%02d-Apr-%04d", day, year);

    // Output the result
    printf("Formatted date: %s\n", output);

    return 0;
}
