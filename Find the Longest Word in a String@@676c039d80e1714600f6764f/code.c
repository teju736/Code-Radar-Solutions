#include <stdio.h>
#include <string.h>

int main() {
    char str1[100];
    fgets(str1, sizeof(str1), stdin);
    int n = strlen(str1);
    char str2[100];
    int c = 0;
    int max = 0;
    int y = 0;
    int start =0;
    for (int i = 0; i<=n; i++) {
        if (str1[i] == ' ' || str1[i] == '\0') {
          if(c>max){
           for(int j = start; j<=i-1 ; j++){
              str2[y]= str1[j];
              y++;
           }}
           max=c;
           c = 0;
           start = i+1;
           y  = 0;
           
        }
        else{
            c++;
        }
    }
    printf("%s" , str2);
    return 0;
}