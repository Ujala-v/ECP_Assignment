#include <stdio.h>
#include <string.h>

int main() {
    char mainString[] = "Hello, World!";
    char substring[] = "World";

    char *result = strstr(mainString, substring);

    if (result != NULL) {
        printf("The substring \"%s\" found at position: %ld\n", substring, result - mainString);
        printf("Substring starting from \"%s\": %s\n", substring, result);
    } else {
        printf("The substring \"%s\" was not found in the main string.\n", substring);
    }

    return 0;
}
