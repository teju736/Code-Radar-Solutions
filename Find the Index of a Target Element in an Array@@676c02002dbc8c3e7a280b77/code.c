#include <stdio.h>

int main() {
    int n;
    int num;
    int c=0;
    scanf("%d" , &n );
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
      scanf("%d" , &num );
    for(int i=0; i<n ; i++){
        if(num == arr[i]){
                  printf("%d" , i );
                  c++;
                  break;
        }
    }
    if(c==0){
        printf("-1");
    }
  
    
    return 0;
}