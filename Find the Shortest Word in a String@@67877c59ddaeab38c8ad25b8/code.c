#include <stdio.h>
#include <string.h>

int main() {
    char line[100];
    char temp[100];
    char ans[100] = ""; // store shortest word
    int min = 100;      // initialize to max possible
    int count = 0;

    fgets(line, sizeof(line), stdin);

    int len = strlen(line);
    if (line[len - 1] == '\n') {
        line[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i <= len; i++) {
        if (line[i] == ' ' || line[i] == '\0') {
            if (count > 0) {
                temp[count] = '\0'; // null-terminate word
                if (count < min) {
                    min = count;
                    strcpy(ans, temp);
                }
                count = 0; // reset for next word
            }
        } else {
            temp[count++] = line[i];
        }
    }

    printf("%s\n", ans);
    return 0;
}
