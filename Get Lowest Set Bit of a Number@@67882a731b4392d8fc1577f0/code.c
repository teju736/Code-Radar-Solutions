#include <stdio.h>

int main() {
    int a;
    scanf("%d" , &a);
    int r = a & (-a);
    int p =0;
    while(r>1){
        r >>=1;
        p++;
    }
    printf("%d", p);
    return 0;
}