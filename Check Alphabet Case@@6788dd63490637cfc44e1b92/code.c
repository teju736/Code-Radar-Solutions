#include <stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%d",&a);
    if(isupper(a)){
        printf("Uppercase");
    }
    else{
        printf("Lowercase");
    }
}