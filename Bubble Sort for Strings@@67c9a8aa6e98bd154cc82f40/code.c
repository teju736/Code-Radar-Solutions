#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char arr[100][100], temp[100];

    scanf("%d", &n); // Read number of strings

    // Input loop
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Bubble sort logic
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }

    // Output sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

