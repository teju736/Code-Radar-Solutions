#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int shift;

    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    // Normalize shift between 0-25
    shift = shift % 26;

    int n = strlen(str);
    if (str[n - 1] == '\n') str[n - 1] = '\0';

    printf("Encrypted: ");
    for (int i = 0; i < strlen(str); i++) {
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
