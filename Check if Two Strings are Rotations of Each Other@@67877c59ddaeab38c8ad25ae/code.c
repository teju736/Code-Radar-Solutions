#include <stdio.h>
#include <string.h>

int a(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    char temp[200];  
    strcpy(temp, str1);
    strcat(temp, str1);
    return (strstr(temp, str2) != NULL);
}

int main() {
    char str1[100], str2[100];
    scanf("%s", str1);
    scanf("%s", str2);

    if (a(str1, str2)) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}