#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%99s",&str);
    printf("reversed string: %s\n",strrev(str));
    return 0;
}