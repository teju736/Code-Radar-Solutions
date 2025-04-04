#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str1[100], w;
    scanf("%s", str);
    getchar(); // consume newline
    scanf("%c", &w);

    int n = strlen(str);
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            str1[i] = w;
        } else {
            str1[i] = ch;
        }
    }

    str1[n] = '\0';
    printf("%s\n", str1);
    return 0;
}


