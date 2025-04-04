#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int freq[256] = {0};  // Frequency map
    int printed[256] = {0}; // To track already printed characters

    fgets(str, sizeof(str), stdin);

    // Remove newline if present
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    // Count frequencies
    for (int i = 0; i < n; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Print in order of first appearance
    for (int i = 0; i < n; i++) {
        unsigned char ch = str[i];
        if (!printed[ch]) {
            printf("%c: %d\n", ch, freq[ch]);
            printed[ch] = 1;
        }
    }

    return 0;
}

