#include <stdio.h>

int main() {
    int n , min1 , min2;
    scanf("%d" , &n);
    int arr[n];
    
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    if(n==1){
        printf("-1");
        return 0;
    }
     int temp;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;


            }
        }
    }


// for(int i=0 ; i<n ; i++){
//         printf("%d " , arr[i]);
//     }

     int min = arr[n-1];
     int he;

     for(int i=0 ; i<n-1 ; i++){
        he = 0;
        he = arr[i+1] - arr[i];
        //  printf("%d %d %d %d \n" , arr[i] , arr[i+1] , he , min);
         if( he < min){
            min1 = arr[i];
            min2 = arr[i+1];
           min = he;
        }
    }
    printf("%d %d" , min1 , min2);

    return 0;
}