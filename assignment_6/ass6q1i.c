#include <stdio.h>
#include <string.h>

int main() {
    char destination[50] = "Hello, ";
    char source[] = "World!";

    strncat(destination, source, 3);

    printf("Resulting string: %s\n", destination);

    return 0;
}

