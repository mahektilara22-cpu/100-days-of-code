/*
Store multiple student records (name, roll number, marks) into a file using fprintf().
Then read them using fscanf() and display each record.
*/

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    FILE *file;
    struct Student s;
    int n, i;

    // Number of students to store
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // Open file in write mode to store student records
    file = fopen("students.txt", "w");
    if (file == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }

    // Read student data from user and write to file
    for (i = 0; i < n; i++) {
        printf("Enter name, roll number and marks of student %d: ", i + 1);
        scanf("%s %d %d", s.name, &s.roll, &s.marks);
        fprintf(file, "%s %d %d\n", s.name, s.roll, s.marks);
    }
    fclose(file);

    // Open file in read mode to read and display student records
    file = fopen("students.txt", "r");
    if (file == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }

    printf("\nStudent Records:\n");
    printf("Name\tRoll Number\tMarks\n");

    // Read each record and display
    while (fscanf(file, "%s %d %d", s.name, &s.roll, &s.marks) == 3) {
        printf("%s\t%d\t\t%d\n", s.name, s.roll, s.marks);
    }
    fclose(file);

    return 0;
}
