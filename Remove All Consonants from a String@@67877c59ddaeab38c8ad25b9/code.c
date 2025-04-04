#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s" , &str);
    int n = strlen(str);

    char str1[100];
    for(int i = 0 ; i<n ; i++){
        char ch = str[i];
        if(ch == 'a' || ch == 'e' ||ch == 'i' ||ch == 'o' ||ch == 'u'|| ch== ' '){
            str1[i]+= ch ;
        }
    }
    printf("%s" , str1);
}