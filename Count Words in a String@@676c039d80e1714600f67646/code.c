#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int c = 0;
    fgets(str, sizeof(str), stdin); 
    int n = strlen(str);
    if (n == 0 || (n == 1 && str[0] == '\n')) {
        printf("0");
        return 0;
    }
    if (str[n - 1] == '\n') {
        str[n - 1] = '\0';
        n--;
    }
    for (int i = 0; i < n; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0') {
            c++;
        }
    }
    if (str[0] != ' ') {
        c++;
    }
    printf("%d\n", c); 
    return 0;
}