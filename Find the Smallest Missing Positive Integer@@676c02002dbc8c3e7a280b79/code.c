#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    int arr2[n]; // Temporary array for positive numbers

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    if (n == 1) {
        if (arr[0] != 1) {
            printf("%d", 1);
        } else {
            printf("%d", 2);
        }
        return 0;
    }

    int j = 0;

    // Filter positive numbers into arr2
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            arr2[j] = arr[i];
            ++j;
        }
    }

    if (j == 0) {
        printf("%d", 1);
        return 0;
    }

    // Sort arr2 to find the missing smallest positive number
    for (int i = 0; i < j - 1; i++) {
        for (int k = i + 1; k < j; k++) {
            if (arr2[i] > arr2[k]) {
                int temp = arr2[i];
                arr2[i] = arr2[k];
                arr2[k] = temp;
            }
        }
    }

    // Find the missing positive integer
    int missing = 1;
    for (int i = 0; i < j; i++) {
        if (arr2[i] == missing) {
            missing++;
        }
    }

    printf("%d", missing);
    
    return 0;
}
