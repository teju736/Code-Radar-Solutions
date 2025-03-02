#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=(N*2)-1;i++){
        if(i<=N){
            for(int j=1;j<=(i*2)-1;j++){
                printf("*");
            }
        }else{
            for(int j=N;j>=1;j--){
                printf("*");
            }
        }printf("\n");
    }
}