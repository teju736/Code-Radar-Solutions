#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);

    for(int i = 0 ; i<n ; i++){
      char ch = str[i]+32;
      printf("%c" , ch);
    }
}