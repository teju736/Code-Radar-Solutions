#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str); // no & needed

    char w, r;
    scanf(" %c", &w); // space before %c skips leftover newline
    scanf(" %c", &r);

    int n = strlen(str);
    char str1[100];

    for (int i = 0; i < n; i++) {
        if (str[i] == w) {
            str1[i] = r;
        } else {
            str1[i] = str[i];
        }
    }
    str1[n] = '\0'; // null-terminate the result

    printf("%s", str1);

    return 0;
}
