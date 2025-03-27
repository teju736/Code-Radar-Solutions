#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0;
    for(int i=n-1;i>=0;i--){
        arr2[i]=arr[j];
        ++j;
    }
    for(int i=0;i<n;i++){
        if (arr[i]!=arr2[i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    
    return 0;
}