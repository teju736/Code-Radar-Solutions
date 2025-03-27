#include <stdio.h>
int main(){
    int n;
    scanf("%d" , &n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d" , &arr[i]);
    }
    int t;
    int h;
    int v1,v2;
    scanf("%d" , &t);
    for(int i=0; i<n-1 ; i++){
        h=0;
        for(int j=i+1; j<n ; j++){
            h = arr[i]+arr[j];
            if(h==t && (v1!=arr[i] && v2!=arr[j])){
                v1 = arr[i];
                v2 =arr[j];
                printf("%d %d\n", arr[i] , arr[j]);
            }
        }
    }
}