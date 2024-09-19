#include <stdio.h>

char* itoa(int value, char *string, int base) {
    char *ptr = string;
    char *ptr1 = string;
    char tmp;
    int num;
    
    if (base < 2 || base > 36) {
        *string = '\0';
        return string;
    }
    
    if (value < 0 && base == 10) {
        *ptr++ = '-';
        num = -value;
    } else {
        num = value;
    }
    
    do {
        int digit = num % base;
        *ptr++ = (digit > 9) ? (digit - 10) + 'a' : digit + '0';
        num /= base;
    } while (num);
    
    *ptr-- = '\0';
    
    while (ptr1 < ptr) {
        tmp = *ptr;
        *ptr-- = *ptr1;
        *ptr1++ = tmp;
    }
    
    return string;
}

int main() {
    char buffer[20];
    int number = 1234;
    int base = 10;
    
    itoa(number, buffer, base);
    printf("String representation: %s\n", buffer);
    
    return 0;
}

