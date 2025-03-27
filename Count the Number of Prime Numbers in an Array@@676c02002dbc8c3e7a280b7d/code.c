#include <stdio.h>
int main() {
    int n;
    scanf("%d" , &n);
    int ar[n];
    int c = n;
    for(int i=0; i<n ; i++){
        scanf("%d" , &ar[i]);
    }

     for(int i=0; i<n ; i++){
        int num= ar[i];
        if(num==1 || num==0){
            c--;
        }
        else if(num==2 || num==3){
            continue;
        }
        else{
            for(int j=2 ; j<num ; j++){
                if(num%j==0){
                    c--;
                    break;
                }

            }
        }

     }
     printf("%d" , c);

    return 0;
}