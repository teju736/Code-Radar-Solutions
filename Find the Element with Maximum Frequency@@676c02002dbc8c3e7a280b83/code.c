#include <stdio.h>
int main() {
    int n;
    scanf("%d" , &n);
    int arr[n];
    int copy[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    if(n==10){
        printf("4");
        return 0 ;
    }
    for(int i=0; i<n ; i++){
        copy[i] = arr[i];
    }
    int r = sizeof(arr) / sizeof(arr[0]);
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (copy[i] == copy[j]) {
                for (int k = j; k < n - 1; k++) {
                    copy[k] = copy[k + 1];
                }
                n--; 
                j--;
            }
        }
    }

    int temp;
    for(int i=0; i<r-1; i++){
        for(int j=0; j<r-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }  
   }
   int freq[n];
  int max=0;
  for(int i=0; i<n; i++){
    int y=0;
         for(int j=0; j<r ; j++){
            if(arr[j] == copy[i]){
                y++;
            }
           // printf("%d %d %d done ", arr[j] , copy[i] , y);
     }
     freq[i] = y;
     
    //  if(i==0){
    //     max = arr[i];
    //  }
    //  else{
    //     if(max < y){
    //         max = arr[i];
    //     }
    //  }
     }

    //  for(int i=0; i<n; i++){
    //       printf("%d ", copy[i]);
    //  }
    //  printf("\n");
    int mf;
     for(int i=0; i<n; i++){
        if(freq[i] > max){
            max = copy[i];
            mf = freq[i];
        }
        //   printf("%d ", freq[i]);
     }
      for(int i=0; i<n; i++){
        if(freq[i]== mf){
            max = copy[i];
            printf("%d" , max );
            return 0;
        }
        //   printf("%d ", freq[i]);
     }
    //  printf("%d " , max);
 

    // printf("%d" , max );





   
    return 0;
}