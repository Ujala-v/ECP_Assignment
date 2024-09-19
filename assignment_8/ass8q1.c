/*Declare a structure to store data for student information. The structure contains roll number,
name, marks for students. Write a program to accept information of student from user and print
the same.*/


#include<stdio.h>

struct student{
int rollno;
char name[20];
float marks;
};
typedef struct student stud_t;
int main()
{
stud_t s;
printf("Enter student information (rollno,name,marks):");
scanf("%d%s%f",&s.rollno,s.name,&s.marks );

printf("rollno=%d\nname=%s\nmarks=%f",s.rollno,s.name,s.marks);

return 0;



}
