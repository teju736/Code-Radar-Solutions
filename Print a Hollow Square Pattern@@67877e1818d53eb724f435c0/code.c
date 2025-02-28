#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N==2){
        printf("**\n**");
    }else{
        for(int i=1;i<=N;i++){
            if(i==1||i==N){
                for(int j=1;j<=N;j++){
                    printf("*");
                }printf("\n");
            }else{
                for(int j=1;j<=N-2){
                    printf("*");
                }
            }
        }
    }
}