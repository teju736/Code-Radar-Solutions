#include <stdio.h>

int main() {
    int c;
    scanf("%d" , &c);
    int ar[c];
    for(int i=0 ; i<c ; i++){
        scanf("%d" , &ar[i]);
    }
   int tu =0;
    int max = ar[0];
    for(int j=0 ; j<c ; j++){ 
        if(ar[j]%2 !=0){
            tu++;
        }
        if(ar[j] > max && ar[j]%2==0){
            max = ar[j];  
        }
        
    }
     if(tu==c){
        printf("-1");
        return -1;
     }
    printf("%d",  max);
 
    return 0;
}