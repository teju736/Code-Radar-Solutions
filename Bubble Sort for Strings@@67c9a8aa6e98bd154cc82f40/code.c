#include <stdio.h>
#include <string.h>

void bubble_sort(char arr[][100], int n);

int main() {
    int n;
    char arr[100][100];

    scanf("%d", &n); // Number of strings

    // Read each string
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Sort using bubble sort
    bubble_sort(arr, n);

    // Print sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

// Function to sort strings using bubble sort
void bubble_sort(char arr[][100], int n) {
    char temp[100];

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                // Swap strings
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
