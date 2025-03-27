#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    int max = 0;
    char final;
    
    for (int i = 0; i < n; i++) {
        char ch = str[i];
        int count = 1; 
        for (int j = i + 1; j < n; j++) {
            if (str[j] == ch) {
                count++;
            }
        }
        if (count > max || (count == max && ch < final)) {
            max = count;
            final = ch;
        }
    }
    printf("%c", final);
    return 0;
}// Your code here...