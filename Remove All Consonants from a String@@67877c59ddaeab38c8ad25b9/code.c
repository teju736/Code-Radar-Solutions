#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    char str1[100];
    int j = 0;

    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        char ch = tolower(str[i]); // make it case-insensitive
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == ' ') {
            str1[j++] = str[i]; // keep original character (for case)
        }
    }

    str1[j] = '\0';
    printf("%s\n", str1);
    return 0;
}
