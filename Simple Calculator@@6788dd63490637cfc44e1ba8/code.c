#include <stdio.h>
int main(){
    int a,b,o;
    scanf("%d %d %d",&a,&b,&o);
    if(o=='+'){
        printf("%d",a+b);
    }else if(o=='-'){
        printf("%d",a-b);
    }else if(o=='/'){
        printf("%d",a/b);
    }else if(o=='*'){
        printf("%d",a*b);
    }else{
        printf("error");
    }
}