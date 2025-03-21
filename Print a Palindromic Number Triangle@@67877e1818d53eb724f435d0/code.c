#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=0;i<=N-1;i++){
        for(int space=N-1;space>=0;space--){
            printf(" ");
        }
        for(int j=1;j<=i*2+1;j++){
            if(j<=i){
                sum=i+1;
                printf("%d",sum);
            }else{
                printf("%d",sum-1);
            }
        }
    }printf("\n");
}