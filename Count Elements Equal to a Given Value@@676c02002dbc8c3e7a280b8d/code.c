#include <stdio.h>

int main() {
    int n;
    int num;
    int c=0;
    scanf("%d %d" , &n , &num);
    int arr[n];
    for(int i=0; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    for(int i=0; i<n ; i++){
        if(num == arr[i]){
                c++;
        }
    }
    printf("%d" , c );
    
    return 0;
}