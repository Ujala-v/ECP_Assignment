/*Write a menu driven program to make a student database. Make program readable by using
enumerations.
Write functions using binary file and unformatted I/O
a. Write student’s record to file.
b. Read student’s record from file.
c. Search of student’s record in a file by roll number.
d. Search student’s record by name.
e. Modify of student’s record in a file.
f. Remove of student’s record in a file.*/




#include<stdio.h>

enum{english,gujrati,hindi,marathi}mid;

typedef struct student_record{
	int rollno;
	char name[20];
	int std;
	float marks;
}SR;

