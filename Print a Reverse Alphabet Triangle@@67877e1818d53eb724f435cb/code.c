#include <stdio.h>

int main() {
    int n;
    scanf("%d" , &n);
    for(int i=n; i>0 ; i--){
            int c= 65;
        for(int j=0; j<i ; j++){
            printf("%c " , (char)c);
            c++;
        }
        printf("\n" );
    }
    return 0;
}