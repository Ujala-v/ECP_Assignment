/*Write a function to accept student information from the user. Write another function to print
student’s information. Re-use these functions in rest of the assignments wherever required.*/

#include<stdio.h>

typedef struct student{
int rollno;
char name[20];
int std;
float marks;
}stud_t;

void accept_student(stud_t *ptr);
void print_student(stud_t s);

int main (void)

{
stud_t s;
 accept_student(&s);
 print_student(s);

return 0;



}

void accept_student(stud_t *ptr)
{
printf("Enter the student information (rollno,name,std,marks):");
scanf("%d%s%d%f",&ptr->rollno,ptr->name,&ptr->std,&ptr->marks);
}

void print_student(stud_t s)
{
printf("%d %s %d %f",s.rollno,s.name,s.std,s.marks);
}
