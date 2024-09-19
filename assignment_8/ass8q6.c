/*Write a structure to store school student information. The student result is one of the members
of this information. Note that till 4th standard school follows grade scheme (A / B / C) and after
4th standard it follows percentage pattern. Accept the information of 3 students from the user
and display it again*/


#include <stdio.h>
#include <stdlib.h>

// Define the structure to store student information
typedef struct {
    char name[100];
    int standard;
    union {
        char grade;         // For grades A, B, C
        float percentage;   // For percentage-based results
    } result;
    int is_percentage; // Flag to indicate if result is percentage (1) or grade (0)
} Student;

// Function prototypes
void accept_student_info(Student *student);
void display_student_info(const Student *student);

int main() {
    Student students[3];

    // Accept information for 3 students
    for (int i = 0; i < 3; ++i) {
        printf("Enter information for student %d:\n", i + 1);
        accept_student_info(&students[i]);
    }

    // Display the information for 3 students
    printf("\nStudent Information:\n");
    for (int i = 0; i < 3; ++i) {
        display_student_info(&students[i]);
    }

    return 0;
}

// Function to accept student information from user
void accept_student_info(Student *student) {
    printf("Name: ");
    scanf("%s", student->name);

    printf("Standard (1 to 12): ");
    scanf("%d", &student->standard);

    if (student->standard <= 4) {
        printf("Enter grade (A, B, C): ");
        scanf(" %c", &student->result.grade); // Note the space before %c to consume any leftover newline character
        student->is_percentage = 0;
    } else {
        printf("Enter percentage: ");
        scanf("%f", &student->result.percentage);
        student->is_percentage = 1;
    }
}

// Function to display student information
void display_student_info(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Standard: %d\n", student->standard);
    
    if (student->is_percentage) {
        printf("Result: %.2f%%\n", student->result.percentage);
    } else {
        printf("Result: %c\n", student->result.grade);
    }
}

