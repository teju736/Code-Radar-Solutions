#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n][2];
    int count;
    for(int i=0;i<n;i++){
        count=0;
        for(int j=0;j<n;j++){
            if (arr[i]==arr[j]){
                ++count;
            }
        }
        arr2[i][0]=arr[i];
        arr2[i][1]=count;
    }
    for( int i=0;i<n;i++){
        if(arr2[i][1]>(n/2)){
            printf("%d",arr2[i][0]);
            return 0;
        }
    }
    printf("%d",-1);
    return 0;
}