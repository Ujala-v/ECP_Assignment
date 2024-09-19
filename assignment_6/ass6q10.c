#include <stdio.h>

void find_and_replace(char *source, const char *find, const char *replace) {
    char temp[1024];
    char *src = source;
    char *temp_ptr = temp;
    const char *find_ptr;
    const char *replace_ptr;
    int find_len = 0;
    int replace_len = 0;
    int i, j;

    while (find[find_len] != '\0') {
        find_len++;
    }

    while (replace[replace_len] != '\0') {
        replace_len++;
    }

    *temp_ptr = '\0';

    while (*src) {
        find_ptr = find;
        while (*find_ptr && *src == *find_ptr) {
            src++;
            find_ptr++;
        }
        if (*find_ptr == '\0') {
            replace_ptr = replace;
            while (*replace_ptr) {
                *temp_ptr++ = *replace_ptr++;
            }
            continue;
        }
        *temp_ptr++ = *src++;
    }
    *temp_ptr = '\0';
    src = temp;
    temp_ptr = source;

    while (*src) {
        *temp_ptr++ = *src++;
    }
    *temp_ptr = '\0';
}

int main() {
    char source[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    find_and_replace(source, find, replace);
    printf("Modified string: %s\n", source);

    return 0;
}

