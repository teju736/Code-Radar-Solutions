#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    char d;
    fgets(str1, sizeof(str1), stdin);
    scanf("%c", &d);
    int c = 0;
    for (int i = 0; str1[i] != '\0'; i++) {
        if (str1[i] == d) {
            c++;
        }
    }

    printf("%d\n", c);
    return 0;
}