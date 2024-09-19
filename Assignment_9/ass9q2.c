/*Write a function to read a file character by character and copy the contents to another file.
Source file pointer and Destination file pointers should be arguments to the function. Use the
function to copy the file to destination file, display contents of the file, accept data from user
and write to destination file.*/

#include<stdio.h>

int main(void)
{

	char name[20];
	int n;

	printf("Enter the filename to open for reading : ");
	scanf("%s",name);

	FILE *ptr1 = fopen(name,"r");

	printf("Enter the filename to open for writing : ");
	scanf("%s",name);

	FILE *ptr2 = fopen(name,"w");

	while ((n = fgetc(ptr1)) != EOF )
	{
		fputc(n,ptr2);
	}

	printf("contents copied to %s\n",name);

	fclose(ptr1);
	fclose(ptr2);

return 0;
}
