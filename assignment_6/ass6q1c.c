#include <stdio.h>
#include <string.h> 

int main() {
    char destination[50] = "Hello, "
    char source[] = "World!";

    strcat(destination, source);
    
    printf("Concatenated string: %s\n", destination);
    
    return 0;
}

