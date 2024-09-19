#include <stdio.h>
#include <strings.h> 

int main() {
    char str1[] = "Hello, World!";
    char str2[] = "hello, world!";

    int result = strcasecmp(str1, str2);

    if (result == 0) {
        printf("The strings \"%s\" and \"%s\" are equal (case-insensitive).\n", str1, str2);
    } else if (result < 0) {
        printf("The string \"%s\" is less than the string \"%s\" (case-insensitive).\n", str1, str2);
    } else {
        printf("The string \"%s\" is greater than the string \"%s\" (case-insensitive).\n", str1, str2);
    }

    return 0;
}

