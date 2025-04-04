#include <stdio.h>
#include <string.h>
#include <ctype.h>

void caesar_cipher(char str[], int shift) {
    int n = strlen(str);

    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        char ch = str[i];

        if (isalpha(ch)) {
            char base = isupper(ch) ? 'A' : 'a';
            ch = (ch - base + shift) % 26 + base;
        }

        printf("%c", ch);
    }

    printf("\n");
}

int main() {
    char str[100];
    int shift;

    fgets(str, sizeof(str), stdin);
    scanf("%d", &shift);

    caesar_cipher(str, shift);

    return 0;
}


