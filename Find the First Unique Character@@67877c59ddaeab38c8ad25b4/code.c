#include <stdio.h>
#include<string.h>

int main(){
    char str[100];
    fgets(str, sizeof(str) , stdin);
    int n = strlen(str);
    int c = 0;
    int b = 0;
    for(int i = 0 ; i<n ; i++){
        c=0;
        for(int j = 0 ; j<n ; j++){
            if(i!=j && str[i]==str[j]){
                c=1;
                break;
            }
           
        }
        if(c==0){
            b++;
            printf("%c" , str[i]);
            return 0;
        }
    }
    if(b==0){
         printf("-");
    }
}
