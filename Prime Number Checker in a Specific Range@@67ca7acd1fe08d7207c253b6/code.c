#include <stdio.h>
int isPrime(int num){
     int c=0;
  if(num==0 || num==1){
    return 0;
  }
  else if(num==2 || num==3){
     return 1;
  }
  else{
     for(int i = 2 ; i< num ; i++){
         if(num%i==0){
              c++;
             return 0;
         }
     }
    if(c==0){
        return 1;
    }
 }
}

// int main(){
//     int t;
//     scanf("%d" , &t);
//     while(t--){
//         int num;
//         scanf("")
//     }
// }

