#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    fgets(str1, sizeof(str1), stdin);

    // Remove newline if present
    int len = strlen(str1);
    if (str1[len - 1] == '\n') {
        str1[len - 1] = '\0';
        len--;
    }

    char longest[100];
    int maxLen = 0, currLen = 0;
    int start = 0;

    for (int i = 0; i <= len; i++) {
        if (str1[i] == ' ' || str1[i] == '\0') {
            if (currLen > maxLen) {
                maxLen = currLen;
                strncpy(longest, &str1[start], currLen);
                longest[currLen] = '\0'; // null-terminate
            }
            currLen = 0;
            start = i + 1;
        } else {
            currLen++;
        }
    }

    printf("%s", longest);
    return 0;
}
