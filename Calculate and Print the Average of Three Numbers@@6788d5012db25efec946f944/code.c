#include <stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    float d=(a+b+c)/3.0;
    printf("Average: %.2lf",d);
    return 0;
}