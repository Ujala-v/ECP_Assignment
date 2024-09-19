#include <stdio.h>
#include <string.h>

void strrev(char *str) {
    int start = 0;
    int end = strlen(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;

        
        start++;
        end--;
    }
}

int main() {
    char myString[] = "Hello, World!";

    printf("Original string: %s\n", myString);

    strrev(myString);

    printf("Reversed string: %s\n", myString);

    return 0;
}

