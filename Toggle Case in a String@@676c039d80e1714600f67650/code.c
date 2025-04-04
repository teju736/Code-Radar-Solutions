#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    char s[100];

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (isupper(ch)) {
            s[i] = tolower(ch);
        } else if (islower(ch)) {
            s[i] = toupper(ch);
        } else {
            s[i] = ch; // keep non-alphabet characters as-is
        }
    }

    s[n] = '\0'; // null-terminate the result

    printf("%s", s);
    return 0;
}
