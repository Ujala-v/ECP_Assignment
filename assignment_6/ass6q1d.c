#include <stdio.h>
#include <string.h> 

int main() {
    char str1[] = "apple";
    char str2[] = "banana";

    int result = strcmp(str1, str2);

    if (result == 0) {
        printf("The strings \"%s\" and \"%s\" are equal.\n", str1, str2);
    } else if (result < 0) {
        printf("The string \"%s\" is less than the string \"%s\".\n", str1, str2);
    } else {
        printf("The string \"%s\" is greater than the string \"%s\".\n", str1, str2);
    }

    return 0;
}

