#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to check if a substring is a palindrome
bool isPalindrome(char str[], int start, int end) {
    while (start < end) {
        if (str[start] != str[end]) {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    int maxLen = 0;
    int startIdx = 0;

    // Try all substrings
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            if (isPalindrome(str, i, j)) {
                int len = j - i + 1;
                if (len > maxLen) {
                    maxLen = len;
                    startIdx = i;
                }
            }
        }
    }

    // Print the longest palindromic substring
    for (int i = startIdx; i < startIdx + maxLen; i++) {
        printf("%c", str[i]);
    }

    return 0;
}
