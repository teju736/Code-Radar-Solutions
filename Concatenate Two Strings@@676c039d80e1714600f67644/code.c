#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char ch;
    char str1[1000];  // larger buffer for combined output
    int q = 0;

    // Read characters one by one until EOF
    while ((ch = getchar()) != EOF) {
        if (!isspace(ch)) { // remove all whitespace (space, tab, newline)
            str1[q++] = ch;
        }
    }
    str1[q] = '\0'; // terminate the final string

    printf("%s", str1);

    return 0;
}

