/*Modify above program to display names in sorted order.*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareStrings(const void *a, const void *b)
{
    return strcmp(*(const char **)a, *(const char **)b);
}

int main(int argc, char *argv[]) {

    char **names = (char **)argv + 1;

    int numNames = argc - 1;

    qsort(names, numNames, sizeof(char *), compareStrings);

    printf("Sorted list of names:\n");

    for (int i = 0; i < numNames; i++)
	{
        printf("%d. %s\n", i + 1, names[i]);
    }

    return 0;
}

