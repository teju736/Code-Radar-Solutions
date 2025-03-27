#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d" , &a , &b);
    int r = a | (1<<b);
    printf("%d", r);
    return 0;
}