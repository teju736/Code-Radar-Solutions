#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int space=N-1;space>=0;space--){
            printf("\n");
        }
        for(int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}