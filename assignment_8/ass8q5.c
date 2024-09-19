//Write a function to sort array of student’s information by roll number. Write another function to
//sort student’s information by name.
#include <stdio.h>
#include <string.h>

// Define the structure to store student information
struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

// Function to accept an array of student information
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

// Function to print an array of student information
void printStudentInfo(const struct Student students[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Student %d Information:\n", i + 1);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
}

// Function to sort the array by roll number using bubble sort
void sortByRollNumber(struct Student students[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (students[j].rollNumber > students[j + 1].rollNumber) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

// Function to sort the array by name using bubble sort
void sortByName(struct Student students[], int count) {
    for (int i = 0; i < count - 1; ++i) {
        for (int j = 0; j < count - i - 1; ++j) {
            if (strcmp(students[j].name, students[j + 1].name) > 0) {
                // Swap students[j] and students[j + 1]
                struct Student temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

int main() {
    int numStudents;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Create an array of Student structures
    struct Student students[numStudents];

    // Accept student information
    acceptStudentInfo(students, numStudents);

    // Print student information before sorting
    printf("\nStudent Information Before Sorting:\n");
    printStudentInfo(students, numStudents);

    // Sort by roll number
    sortByRollNumber(students, numStudents);
    printf("\nStudent Information Sorted by Roll Number:\n");
    printStudentInfo(students, numStudents);

    // Sort by name
    sortByName(students, numStudents);
    printf("\nStudent Information Sorted by Name:\n");
    printStudentInfo(students, numStudents);

    return 0;
}
