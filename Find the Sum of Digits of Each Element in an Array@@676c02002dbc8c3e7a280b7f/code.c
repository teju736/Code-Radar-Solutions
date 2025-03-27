#include <stdio.h>

int main() {
     int n;
     scanf("%d" , &n);
     int arr[n];
     int temp[n];
     for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
     }
     for(int i=0; i<n ; i++){
       int sum = 0;
       int num = arr[i];
       if(num<0){
        num= num*(-1);
       }
       while(num>0){
        int y = num%10;
        sum+=y;
        num/=10;
       }
       temp[i]= sum;
       
     }
     for(int i=0; i<n ; i++){
        printf("%d " , temp[i]);
     }
     

    return 0;
}