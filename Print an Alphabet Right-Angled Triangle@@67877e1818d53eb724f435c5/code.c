#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
        for(int j=1;j<=i;j++){
            switch(j){
                case 1:printf("A");
                break;
                case 2:printf("B");
                break;
                case 3:printf("C");
                break;
                case 4:printf("D");
                break;
            }
            printf("%c ",j);
        }printf("\n");
    }
}