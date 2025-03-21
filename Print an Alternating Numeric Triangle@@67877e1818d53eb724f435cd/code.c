#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        if(i%2==0){
            printf("1 ");
        }else{
            printf("0 ");
        }
    }printf("\n");
}