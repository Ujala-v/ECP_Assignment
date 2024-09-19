/*Write a program to accept list of names as command line arguments and display the names.*/
#include <stdio.h>

int main(int argc, char *argv[]) {


    printf("List of names:\n");

	for (int i = 1; i < argc; i++)
	{
		printf("%d. %s\n", i, argv[i]);
    }

    return 0;
}

