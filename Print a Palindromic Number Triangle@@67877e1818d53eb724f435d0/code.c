#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=0;i<=N-1;i++){
        for(int space=N-i+1;space>=0;space--){
            printf(" ");
        }
        for(int j=1;j<=(i*2)+1;j++){
            if(j<=i){
                printf("%d",j);
            }
        }printf("\n");
    }
}