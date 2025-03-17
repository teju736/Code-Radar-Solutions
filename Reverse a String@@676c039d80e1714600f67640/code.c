#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    scanf("%99s",&str);
    printf("%s",strrev(str));
    return 0;
}