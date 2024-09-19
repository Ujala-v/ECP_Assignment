#include <stdio.h>
#include <string.h>

void find_and_replace(char *source, const char *find, const char *replace) {
    char buffer[1024];
    char *pos;
    size_t find_len = strlen(find);
    size_t replace_len = strlen(replace);
    size_t source_len = strlen(source);
    size_t buffer_len = 0;

    buffer[0] = '\0';

    while ((pos = strstr(source, find)) != NULL) {
        size_t prefix_len = pos - source;
        strncpy(buffer + buffer_len, source, prefix_len);
        buffer_len += prefix_len;
        strcpy(buffer + buffer_len, replace);
        buffer_len += replace_len;
        source = pos + find_len;
    }
    strcpy(buffer + buffer_len, source);

    strcpy(source, buffer);
}

int main() {
    char source[1024] = "This is test time";
    const char *find = "is";
    const char *replace = "was";

    find_and_replace(source, find, replace);
    printf("Modified string: %s\n", source);

    return 0;
}

