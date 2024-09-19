#include <stdio.h>
#include <string.h>

int main() {
    char myString[] = "Hello, World!";
   
    char ch = 'o';
   
    char *result = strchr(myString, ch);
    
    if (result != NULL){
        printf("The character '%c' found at position: %ld\n", ch, result - myString);
        printf("Substring starting from '%c': %s\n", ch, result);
    } else {
        printf("The character '%c' was not found in the string.\n", ch);
    }
    
    return 0;
}

