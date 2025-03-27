#include <stdio.h>
#include <string.h>

int main() {
    char *str = NULL;
    scanf("%ms" , &str);
    int c =0;
    int n = strlen(str);

    for(int i = 0 ; i<n ; i++){
        if(str[i]=='a' ||str[i]=='e' ||str[i]=='i' ||str[i]=='o'||str[i]=='u' ||
        str[i]=='A' ||str[i]=='E'||str[i]=='I'||str[i]=='O' ||str[i]=='U'){
            c++;
        }
    }
    printf("%d" , c);
}