#include <stdio.h>
int check(int n,int arr[],int m){
    for(int i=0;i<m;i++){
        if(n<arr[i]){
            return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int arr2[n];
    int k=0;
    int sum[n];
     sum[0]=arr[n-1];
    int j=1;
    for(int i=n-1;i>=0;i--){
        if(i==n-1){
            arr2[k]=arr[i];
            ++k;
        }
        else if (check(arr[i],sum,j)==1){
            arr2[k]=arr[i];
            ++k;
            sum[j]=arr[i];
            ++j;
        }
        else{
            sum[j]=arr[i];
            ++j;
        }
    }
    for(int i=k-1;i>=0;i--){
        printf("%d ",arr2[i]);
    }
    return 0;
}