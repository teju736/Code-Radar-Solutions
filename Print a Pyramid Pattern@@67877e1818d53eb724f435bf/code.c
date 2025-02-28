#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<=N;i++){
        for(int space=0;space<=N-i;space++){
            printf(" ");
        }
        for(int j=1;j<=i+2;j++){
            printf("*");
        }

    }
    printf("\n");
}