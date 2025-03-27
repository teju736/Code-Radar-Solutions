#include <stdio.h>


int main() {
    int a;
    scanf("%d" , &a);
    int r = a &1;
    printf("%s", (r==1)? "Set" : "Not Set");
    return 0;
}