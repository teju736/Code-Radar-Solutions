#include <stdio.h>
#include <string.h>

int main() {
    int q = 0;
    char str[100];
    char str1[100];

    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    
    // Remove newline if present
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    // Remove spaces
    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            str1[q++] = str[i];
        }
    }
    str1[q] = '\0'; // Terminate the new string

    printf("%s", str1);

    return 0;
}
