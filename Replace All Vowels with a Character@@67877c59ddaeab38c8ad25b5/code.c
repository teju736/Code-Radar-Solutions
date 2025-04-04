#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100];
    char w;

    scanf("%s", str);
    getchar(); // consume leftover newline
    scanf("%c", &w);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str1[i] = w;
        } else {
            str1[i] = ch;
        }
    }

    str1[n] = '\0'; // null-terminate
    printf("%s\n", str1);

    return 0;
}

