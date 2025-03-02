#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int k=i-1;k>=1;k--){
            printf(" ");
        }
        for(int j=1;j<=i*(N-1);j++){
            printf("*");
        }
        printf("\n");
    }
}