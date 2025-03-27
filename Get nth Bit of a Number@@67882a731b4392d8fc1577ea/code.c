#include <stdio.h>

int main() {
    int a , b;
    scanf("%d %d" , &a , &b);
    int v = (a>>b) & 1;
    printf("%d", v);
    return 0;
}