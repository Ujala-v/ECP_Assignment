#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, there!";

    int result = strncmp(str1, str2, 7);

    if (result == 0) {
        printf("The first 7 characters of the strings are equal.\n");
    } else if (result < 0) {
        printf("The first 7 characters of str1 are less than those of str2.\n");
    } else {
        printf("The first 7 characters of str1 are greater than those of str2.\n");
    }

    return 0;
}

