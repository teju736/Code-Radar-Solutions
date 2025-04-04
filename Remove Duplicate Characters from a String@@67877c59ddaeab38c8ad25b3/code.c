#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    int seen[256] = {0}; // To track seen characters
    char result[100];
    int idx = 0;

    for (int i = 0; i < n; i++) {
        unsigned char ch = str[i];
        if (!seen[ch]) {
            result[idx++] = ch;
            seen[ch] = 1;
        }
    }

    result[idx] = '\0'; // Null-terminate the result
    printf("%s\n", result);

    return 0;
}
