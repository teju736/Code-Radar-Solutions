#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    char s2[100] = ""; // initialize to empty string

    fgets(s, sizeof(s), stdin);

    // Remove spaces and store in s2
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] != ' ' && s[i] != '\n') {
            char temp[2];
            temp[0] = s[i];
            temp[1] = '\0';
            strcat(s2, temp);
        }
    }

    // Check for palindrome
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
