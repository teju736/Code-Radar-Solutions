#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    int n = strlen(str1);
    for (int i = 0; i<n; i++) {
        if (str1[i] == ' ' ) {
            continue;}
        else{
              printf("%c" , str1[i]);
           }
        }
    
    return 0;
}