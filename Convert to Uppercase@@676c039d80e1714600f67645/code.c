#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);

    int n = strlen(str);

    for (int i = 0; i < n; i++) {
        char ch = tolower(str[i]);
        printf("%c", ch);
    }

    return 0;
}
