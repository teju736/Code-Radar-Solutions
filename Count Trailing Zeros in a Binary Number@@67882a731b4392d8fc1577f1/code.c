#include <stdio.h>

int main() {
    int a ;
    scanf("%d" , &a);
    int c=0;
    while((a &1) == 0){
        c++;
        a >>=1;
    }
    printf("%d", c);
    return 0;
}