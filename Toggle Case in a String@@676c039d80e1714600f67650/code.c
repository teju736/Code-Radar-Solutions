#include <stdio.h>
#include<string.h>
#include <ctype.h>
int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
     char s[100];
    for(int i = 0 ; i<n ; i++){
        char ch= str[i];
        if(ch < 96){
          s[i]+= toupper(ch);
        }
        else{
            s[i]+= tolower(ch); 
        }
    }
    printf("%s" , s);
}