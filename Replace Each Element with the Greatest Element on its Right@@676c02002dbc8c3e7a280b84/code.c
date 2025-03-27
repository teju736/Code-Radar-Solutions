#include <stdio.h>
int main() {
      int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(i==n-1){
            printf("%d",-1);
            return 0;
        }
        int max=0;
        for(int j=i+1;j<n;j++){
            if(max<arr[j]){
                max=arr[j];
            }

        }
        printf("%d ",max);
    }
    return 0;
}