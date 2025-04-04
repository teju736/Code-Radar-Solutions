#include <stdio.h>
#include <string.h>

int main(){
    char str[100];
    scanf("%s" , &str);
    int n = strlen(str);
  
    for(int i = 0 ; i<n ; i++){
        char ch = str[i];
        if(ch == '1' || ch == '0' ){
            continue;
        }
        else{
            printf("No");
            return 0;
        }
    }
    printf("Yes");
}