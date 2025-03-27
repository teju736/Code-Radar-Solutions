#include <stdio.h>
int main() {
    int N , r;
    int ar[N];
    scanf("%d" , &N);
    for(int i=0 ; i<N ; i++){
        scanf("%d" , &ar[i]);
    }
    scanf("%d" , &r);
    int temp;
    for(int i=0 ; i<r ; i++){
        temp = ar[N-1];
        for(int j=N-1; j>0 ; j-- ){
          ar[j] = ar[j-1];
        }
        ar[0]=temp;
    }
    for(int o =0; o<N ; o++){
        printf("%d\n" , ar[o]);
    }

    return 0;
}