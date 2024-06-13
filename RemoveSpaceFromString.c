#include <stdio.h>
#include <string.h>

void removeSpaces(char* str) {

    char* dest = str;
    while (*str != '\0') {
        if (*str != ' ') {
            *dest = *str;
            dest++;
        }
        str++;
    }
    *dest = '\0';
}

int main() {
    char str[20];
    gets(str);
    removeSpaces(str);
    printf("String without spaces: \"%s\"\n", str);
    return 0;
}
