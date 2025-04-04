#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n);   // declaration
void printArray(char arr[][100], int n);   // declaration

int main() {
    int n;
    char arr[100][100];

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    bubbleSort(arr, n);
    printArray(arr, n);  // ✅ No more implicit error

    return 0;
}

// Sort function
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

// Print function
void printArray(char arr[][100], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s\n", arr[i]);
    }
}
