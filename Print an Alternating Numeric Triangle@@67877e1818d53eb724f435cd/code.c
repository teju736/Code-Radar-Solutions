#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    if(N==1){
        printf("1");
    }else{for(int i=0;i<N;i++){
        for(int j=0;j<=i;j++){
            if(i==1){
                printf("1");
            }
            else if(i%2==0){
                printf("0 ");
            }else{
                printf("1 ");
            }
        }
    }
}printf("\n");
}