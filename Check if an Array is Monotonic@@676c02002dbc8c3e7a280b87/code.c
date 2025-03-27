#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int count=0;
    int count1=0;
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1] ){
            ++count;
        }
        else if (arr[i]>=arr[i+1]){
            ++count1;
        }
    }
    if(count1==n-1 || count==n-1){
        printf("YES");
        return 0;
    }
    printf("NO");



    return 0;
}