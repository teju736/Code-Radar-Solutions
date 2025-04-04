#include <stdio.h>

int main() {
    char ch;
    char str[1000]; // large enough buffer
    int i = 0;

    // Read character by character
    while ((ch = getchar()) != EOF) {
        if (ch != '\n') { // skip newline, keep everything else
            str[i++] = ch;
        }
    }
    str[i] = '\0'; // terminate the final string

    printf("%s", str);

    return 0;
}


