#include <stdio.h>

int main() {
    int c;
    scanf("%d" , &c);
    int ar[c];
    for(int i=0 ; i<c ; i++){
        scanf("%d" , &ar[i]);
    }
    int min =ar[0];
    int max = ar[0];
    for(int j=0 ; j<c ; j++){
        if(ar[j] > max){
            max = ar[j];
        }
        if(ar[j]< min){
            min = ar[j];
        }
    }
    printf("%d %d", min , max);
 
    return 0;
}