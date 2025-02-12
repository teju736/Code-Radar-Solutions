#include <stdio.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    char o;
    scanf("%c",&o);
    if(o=='+'){
        printf("%d",a+b);
    }else if(o=='-'){
        printf("%d",a-b);
    }else if(o=='/'){
        printf("%d",a/b);
    }else if(o=='*'){
        printf("%d",a*b);
    }else{
        printf("error")
    }
}