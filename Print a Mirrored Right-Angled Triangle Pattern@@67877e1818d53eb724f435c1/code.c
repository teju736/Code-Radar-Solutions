#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int space=N-i;space>=0;space--){
            printf(" ");
        }
        for(int j=1;j<=N;j++){
            printf("*");
        }
        printf("\n");
    }
}