/*Write a function to accept array of student’s information from the user. Write another function
to print the array student’s information. Re-use these functions in rest of the assignments
wherever required.*/


#include <stdio.h>

struct Student {
    int rollNumber;
    char name[100];
    float marks;
};

void accept(struct Student stud[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Enter Roll Number: ");
        scanf("%d", &stud[i].rollNumber);

        printf("Enter Name: ");
        scanf(" %[^\n]%*c", stud[i].name);

        printf("Enter Marks: ");
        scanf("%f", &stud[i].marks);

        printf("\n");
    }
}

void print(const struct Student stud[], int count) {
    for (int i = 0; i < count; ++i) {
        printf("Student %d Information:\n", i + 1);
        printf("Roll Number: %d\n", stud[i].rollNumber);
        printf("Name: %s\n", stud[i].name);
        printf("Marks: %.2f\n", stud[i].marks);
        printf("\n");
    }
}

int main() {
    int numStud;

    // Ask the user for the number of students
    printf("Enter the number of students: ");
    scanf("%d", &numStud);

    struct Student stud[numStud];

    accept(stud, numStud);

    print(stud, numStud);

    return 0;
}

