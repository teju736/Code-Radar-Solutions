#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
   for(int i=1;i<=(N*2)-1;i++){
    if(i<=N){
        for(int space=1;space<=N-i;space++){
            printf(" ");
        }
        for(int j=1;j<=(i*2)-1;j++){
            printf("*");
        }
    }else{
        for(int space=1;space<=i-N;space++){
            printf(" ");
        }for(int j=1;j<=((N * 2 - i) * 2) - 1;j++){
            printf("*");
        }
    }printf("\n");
   }
}