#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char ch) {
    ch = tolower(ch);
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
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
        // Print vowels and spaces
        for (int i = 0; i < n; i++) {
            if (is_vowel(str[i]) || str[i] == ' ') {
                printf("%c", str[i]);
            }
        }
    } else {
        int digit_or_consonant = 0;
        // Check if string starts with digit or consonant (non-vowel)
        if (!is_vowel(str[0])) {
            digit_or_consonant = 1;
        }

        if (digit_or_consonant) {
            // Print until first vowel (include vowel)
            for (int i = 0; i < n; i++) {
                printf("%c", str[i]);
                if (is_vowel(str[i])) {
                    break;
                }
            }
        } else {
            // Only vowels
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


