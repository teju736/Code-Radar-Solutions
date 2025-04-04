#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char str1[100];
    int j = 0;

    fgets(str, sizeof(str), stdin); // Read entire line

    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        // Keep lowercase vowels and spaces
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u' || ch == ' ') {
            str1[j++] = ch;
        }
    }

    str1[j] = '\0'; // null-terminate
    printf("%s\n", str1);

    return 0;
}

