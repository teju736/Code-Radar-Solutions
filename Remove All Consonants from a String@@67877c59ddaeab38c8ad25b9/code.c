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

    // Check if input contains a space (treat it as a sentence)
    int is_sentence = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ') {
            is_sentence = 1;
            break;
        }
    }

    if (is_sentence) {
        // Extract only vowels and spaces
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            if (is_vowel(ch) || ch == ' ') {
                printf("%c", ch);
            }
        }
    } else {
        // Print until and including the first vowel
        for (int i = 0; i < n; i++) {
            char ch = str[i];
            printf("%c", ch);
            if (is_vowel(ch)) {
                break;
            }
        }
    }

    printf("\n");
    return 0;
}
