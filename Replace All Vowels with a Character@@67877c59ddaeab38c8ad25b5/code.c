#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100];
    char w;

    scanf("%s", str);
    getchar(); // to consume the leftover newline
    scanf("%c", &w);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            str1[i] = w;
        } else {
            str1[i] = ch;
        }
    }

    str1[n] = '\0'; // null-terminate the new string
    printf("%s\n", str1);

    return 0;
}
