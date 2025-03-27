#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s" , &str);
    int n = strlen(str);
    char w , r ; 
    scanf("%c" , &w);
    scanf("%c" , &r);

    char str1[100];
    for(int i = 0 ; i<n ; i++){
        char ch = str[i];
        if(ch == w){
            str1[i]+= r ;
        }
        else{
            str1[i]+= ch;
        }
    }
    printf("%s" , str1);
}