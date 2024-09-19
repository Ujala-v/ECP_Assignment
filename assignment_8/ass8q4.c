/*Write a function to search student’s information by roll number. Write another function to
search student’s information by name. (linear search)*/
#include <stdio.h>
#include <string.h>

struct Student {
    int rollNumber;
    char name[100];
    float marks;
};


void acceptStudentInfo(struct Student students[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", students[i].name);

        printf("Enter Marks: ");
        scanf("%f", &students[i].marks);

        printf("\n");
    }
}


void printStudentInfo(const struct Student students[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Student %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}


void searchByRollNumber(const struct Student students[], int count, int rollNumber) {
    for (int i = 0; i < count; ++i) {
        if (students[i].rollNumber == rollNumber) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with Roll Number %d not found.\n", rollNumber);
}

void searchByName(const struct Student students[], int count, const char* name) {
    for (int i = 0; i < count; ++i) {
        if (strcmp(students[i].name, name) == 0) {
            printf("Student found:\n");
            printf("Roll Number: %d\n", students[i].rollNumber);
            printf("Name: %s\n", students[i].name);
            printf("Marks: %.2f\n", students[i].marks);
            return;
        }
    }
    printf("Student with Name '%s' not found.\n", name);
}

int main() {
    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Create an array of Student structures
    struct Student students[numStudents];

    acceptStudentInfo(students, numStudents);

    printStudentInfo(students, numStudents);

    int searchRollNumber;
    printf("Enter Roll Number to search: ");
    scanf("%d", &searchRollNumber);
    searchByRollNumber(students, numStudents, searchRollNumber);

    char searchName[100];
    printf("Enter Name to search: ");
    scanf(" %[^\n]%*c", searchName);
    searchByName(students, numStudents, searchName);

    return 0;
}

