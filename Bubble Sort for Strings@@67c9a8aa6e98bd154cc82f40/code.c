#include <stdio.h>
#include <string.h>

// Bubble Sort function definition
void bubbleSort(char input[][100], int n, char output[][100]) {
    // Copy original array to output
    for (int i = 0; i < n; i++) {
        strcpy(output[i], input[i]);
    }

    // Perform Bubble Sort on output
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(output[j], output[j + 1]) > 0) {
                char temp[100];
                strcpy(temp, output[j]);
                strcpy(output[j], output[j + 1]);
                strcpy(output[j + 1], temp);
            }
        }
    }
}

