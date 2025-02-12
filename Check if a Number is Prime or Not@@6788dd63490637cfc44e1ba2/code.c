#include <stdio.h>
int main(){
    int a,isPrime=1;
    scanf("%d",&a);
    if(a<2){
        printf("Not Prime");
    }
     for (int i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            isPrime = 0; 
            break;}
            if (isPrime) {
        printf("Prime\n");
    } else {
        printf("Not Prime\n");
    }
    }
    return  0;
}
