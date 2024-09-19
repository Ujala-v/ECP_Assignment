/*Write a structure to store school student information. Note that assuming the records are
maintained till 12th standard student, standard field do not occupy more than 4 bits. Also
student gender can be stored as a single bit. Consider age to be maximum 32 years. Accept the
information of 3 students from the user and display it again.*/

#include <stdio.h>
#include <stdint.h>

// Define the structure to store student information
typedef struct {
    uint8_t standard : 4;  // 4 bits for standard (0 to 12)
    uint8_t gender : 1;    // 1 bit for gender (0 for female, 1 for male)
    uint8_t age : 6;       // 6 bits for age (0 to 32)
    char name[100];        // Name of the student
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

    printf("Standard (0 to 12): ");
    scanf("%hhu", &student->standard); // %hhu for unsigned char

    printf("Gender (0 for female, 1 for male): ");
    scanf("%hhu", &student->gender); // %hhu for unsigned char

    printf("Age (0 to 32): ");
    scanf("%hhu", &student->age); // %hhu for unsigned char
}

// Function to display student information
void display_student_info(const Student *student) {
    printf("Name: %s\n", student->name);
    printf("Standard: %u\n", student->standard);
    printf("Gender: %s\n", student->gender ? "Male" : "Female");
    printf("Age: %u\n", student->age);
}

