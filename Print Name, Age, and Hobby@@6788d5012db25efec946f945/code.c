#include <stdio.h>
int main() {
    char a[100],b[100];
    int c;
    scanf("%s %d %s",&a,&c,&b);
    printf("Name: %s",a);
    printf("Age: %d",c);
    printf("Hobby: %s",b);
    return 0;
}