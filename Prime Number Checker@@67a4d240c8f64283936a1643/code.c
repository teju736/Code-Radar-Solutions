#include <stdio.h>
int isprime(int a){
    int c=0;
for(int i=1; i<=a; i++){
    if(a%i==0){
        c++;
    }
}
return c;}

int main() {
    printf("Enter the number:");
    int a;
    scanf("%d" ,&a);
    int su = isprime(a);
    if(su==2){
         printf("Prime");
    }
    else{
         printf("Not Prime");
    }

 return 0;
}