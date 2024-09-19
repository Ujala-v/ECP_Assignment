#include <stdio.h>

int my_atoi(const char *string) {
    int result = 0;
    int sign = 1;
    
    if (*string == '-') {
        sign = -1;
        string++;
    }
    
    while (*string >= '0' && *string <= '9') {
        result = result * 10 + (*string - '0');
        string++;
    }
    
    return sign * result;
}

int main() {
    char str[] = "-12345";
    int num = my_atoi(str);
    printf("Numeric equivalent: %d\n", num);
    
    return 0;
}
