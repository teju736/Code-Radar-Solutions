#include <stdio.h>
int isprime(int a){
    int c=0;
for(int i=1; i<=a; i++){
    if(a%i==0){
        c++;
    }
}
if (c==2){
    return 1;
}
else{
    return 0;
}
}
