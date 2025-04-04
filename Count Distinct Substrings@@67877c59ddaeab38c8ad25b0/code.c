#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to compare two substrings
bool isSame(char a[], char b[]) {
    return strcmp(a, b) == 0;
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    // Remove newline character
    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    char substr[5000][100]; // To store all substrings
    int count = 0;

    for (int i = 0; i < n; i++) {
        for (int len = 1; len <= n - i; len++) {
            char temp[100];
            strncpy(temp, str + i, len);
            temp[len] = '\0';

            // Check if it's already in the list
            bool found = false;
            for (int k = 0; k < count; k++) {
                if (isSame(substr[k], temp)) {
                    found = true;
                    break;
                }
            }

            // If not found, add to list
            if (!found) {
                strcpy(substr[count], temp);
                count++;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}
