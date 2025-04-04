#include <stdio.h>
#include<string.h>

int main(){
    char st[100];
    fgets(st, sizeof(st) , stdin);
    char word[100];
    fgets(word, sizeof(word) , stdin);

    if(strstr(st , word)!= NULL){
         printf("Yes");
    }

    else{
         printf("No");
    }
}