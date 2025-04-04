#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0}; // ASCII size

    // Read input
    fgets(str, sizeof(str), stdin);

    // Remove newline character if exists
    int len = strlen(str);
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    // Count frequencies
    for (int i = 0; i < len; i++) {
        unsigned char ch = str[i];
        freq[ch]++;
    }

    // Print frequencies
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("'%c' = %d\n", i, freq[i]);
        }
    }

    return 0;
}
