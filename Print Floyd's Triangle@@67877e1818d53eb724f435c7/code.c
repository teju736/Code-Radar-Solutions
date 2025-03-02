#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    int sum=0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            sum+=1;
            printf("%d ",sum);
        }printf("\n");
    }
}