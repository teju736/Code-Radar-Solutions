#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int shift;

    fgets(str, sizeof(str), stdin); // Read the input string

    // Remove trailing newline if present
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    // Read the shift value (consume newline left by fgets with a space before %d)
    scanf(" %d", &shift);

    for (int i = 0; i < n; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = (ch - base + shift) % 26 + base;
        }

        printf("%c", ch);
    }

    printf("\n");
    return 0;
}

