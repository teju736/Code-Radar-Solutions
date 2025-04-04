#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u');
}

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }

    int has_space = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            has_space = 1;
            break;
        }
    }

    if (has_space) {
        // Case: sentence → print vowels + spaces
        for (int i = 0; i < n; i++) {
            if (is_vowel(str[i]) || str[i] == ' ') {
                printf("%c", str[i]);
            }
        }
    } else {
        if (isdigit(str[0])) {
            // Starts with digit → print up to and including first vowel
            for (int i = 0; i < n; i++) {
                printf("%c", str[i]);
                if (is_vowel(str[i])) {
                    break;
                }
            }
        } else {
            // Normal word → print only vowels
            for (int i = 0; i < n; i++) {
                if (is_vowel(str[i])) {
                    printf("%c", str[i]);
                }
            }
        }
    }

    printf("\n");
    return 0;
}



