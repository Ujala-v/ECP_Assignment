Modify above program to accept source and target filenames as command line arguments
#include<stdio.h>

int main (int argc, char *argv[])
{
	char ch;

	FILE *fs = fopen(argv[1], "r");
	FILE *fd = fopen(argv[2], "w");

	while((ch = fgetc(fs)) != EOF)
			fputc(ch,fd);

	fclose(fs);
	fclose(fd);

	return 0;
}
