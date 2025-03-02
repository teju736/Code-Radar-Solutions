#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int space=N-1;space>=0;space--){
            printf(" ");
        }
    for(int i=1;i<=N;i++){
        for(int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
        printf("\n");
    }
}