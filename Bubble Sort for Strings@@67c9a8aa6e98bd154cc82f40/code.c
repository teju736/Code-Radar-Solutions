#include <stdio.h>
#include <string.h>

// Declare the bubbleSort function
void bubbleSort(char arr[][100], int n);

int main() {
    int n;
    char arr[100][100];

    scanf("%d", &n); // Number of strings

    // Read strings from user
    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    // Call the sorting function
    bubbleSort(arr, n);

    // Print sorted strings
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}

// Function to sort strings using bubble sort
void bubbleSort(char arr[][100], int n) {
    char temp[100];
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j + 1]) > 0) {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}
