#include <stdio.h>

void remove_char(char *str, char ch) {
    char *src = str;
    char *dst = str;
    
    while (*src) {
        if (*src != ch) {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

int main() {
    char str[] = "Hello, World!";
    char ch = 'o';
    
    remove_char(str, ch);
    printf("Resulting string: %s\n", str);
    
    return 0;
}

