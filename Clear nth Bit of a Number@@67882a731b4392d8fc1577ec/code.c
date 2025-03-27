#include <stdio.h>


int main() {
    int a , b;
    scanf("%d %d" , &a , &b);
    int r = ~(1 << b);
    int t = a&r;
    printf("%d", t);
    return 0;
}