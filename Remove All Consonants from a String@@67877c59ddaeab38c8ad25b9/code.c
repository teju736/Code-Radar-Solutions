#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin); // Read the full input including spaces

    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    for (int i = 0; i < n; i++) {
        char ch = str[i];
        printf("%c", ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            break; // Stop after printing the first vowel
        }
    }

    return 0;
}
