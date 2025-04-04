#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    char s2[100] = "";
    fgets(s, sizeof(s), stdin);

    // Remove spaces and convert to lowercase
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            char ch = tolower(s[i]);
            int len = strlen(s2);
            s2[len] = ch;
            s2[len + 1] = '\0';
        }
    }

    // Palindrome check
    int len = strlen(s2);
    for (int i = 0; i < len / 2; i++) {
        if (s2[i] != s2[len - i - 1]) {
            printf("No\n");
            return 0;
        }
    }

    printf("Yes\n");
    return 0;
}

