/*Write a function to write student’s record to a text file using formatted I/O. i.e. fprintf. Write
another function to read student’s record from a text file using formatted I/O. i.e. fscanf*/



#include<stdio.h>

int main(void){
		int rollno=12;
		char name= 'abc';
		int std=7;
		float marks=87;


	FILE *fp = fopen("student.txt","w");

	fprintf(fp,"%d %c %d %f\n",rollno,name,std,marks);
	fclose(fp);

	FILE *fp = fopen("student.txt","r");

	fscanf(fp,"%d %c %d %f",&rollno,name,&std,&marks);
	printf("rollno=%d\nname=%c\nstd=%d\nmarks=%f\n",rollno,name,std,marks);
	fclose(fp);

return 0;
}
