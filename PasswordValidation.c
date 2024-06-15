#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isValidPassword(char* password) {
    int hasUpper = 0, hasLower = 0, hasDigit = 0, hasSpecial = 0;
    int length = strlen(password);

    if (length < 3 || length > 9) return 0;

    for (int i = 0; i < length; i++) {
        if (isupper(password[i])) hasUpper = 1;
        else if (islower(password[i])) hasLower = 1;
        else if (isdigit(password[i])) hasDigit = 1;
        else hasSpecial = 1;
    }

    return hasUpper && hasLower && hasDigit && hasSpecial;
}

int main() {
    char password[10];
    printf("Enter your password: ");
    scanf("%9s", password);

    if (isValidPassword(password)) {
        printf("Password is valid.\n");
    } else {
        printf("Invalid password!\n");
    }

    return 0;
}
