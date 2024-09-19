#include <stdio.h>
#include <string.h> 

int main() {
    
    char myString[] = "Hello, World!";
    
   
    size_t length = strlen(myString);
    
    
    printf("The length of the string \"%s\" is %zu characters.\n", myString, length);
    
    return 0;
}

