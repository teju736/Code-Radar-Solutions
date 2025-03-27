#include <stdio.h>


int main() {
    int n;
    int c=0;
    scanf("%d", &n);
    if(n==1){
        printf("-1");
        return 0;
    }
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i=0; i<=n-1 ; i++){
        for(int j=i+1; j<n ; j++){
             if(arr[i]==arr[j]){
                 printf("%d" , arr[j]);
                 c+=1;
               return 0;
             }
            
        }  
    }
     if(c==0){
            printf("-1");
        }
   
    return 0;
}