#include <stdio.h>
#include <string.h>
#include <ctype.h>

#include <string.h>
#include <stdio.h>

void caesarCipherEncrypt(char arr[][100], int n, int shift) {
    for (int i = 0; i < n; i++) {
        int len = strlen(arr[i]);

        for (int j = 0; j < len; j++) {
            if (arr[i][j] >= 'a' && arr[i][j] <= 'z') {
                arr[i][j] = ((arr[i][j] - 'a' + shift) % 26) + 'a';
            }
            else if (arr[i][j] >= 'A' && arr[i][j] <= 'Z') {
                arr[i][j] = ((arr[i][j] - 'A' + shift) % 26) + 'A';
            }
            // Optionally handle other characters if needed
        }
    }
}

void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
