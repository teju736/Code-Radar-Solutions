#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int c=0;
    while((a & (1<<31)) == 0){
        a <<=1;
        c++;
    }
    printf("%d", c);
    return 0;
}