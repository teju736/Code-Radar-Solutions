#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==1){
        if (arr[0]!=1){
        printf("%d",1);}
        else{
            printf("%d",2);
        }
        return 0;
    }
    int j=0;
    for(int i=0;i<n;i++){
        if (arr[i]>0){
            arr2[j]=arr[i];
            ++j;
         }
    }
    if(j==0){
        printf("%d",1);
        return 0;
    }
    int sum=0;
    int min=arr2[0];
    int max=arr2[0];
    for(int i=0;i<j;i++){
        sum+=arr2[i];
        if (arr2[i]<min){
            min=arr2[i];
        }
        else if(arr2[i]>max){
            max=arr2[i];
        }
    }
    printf("%d %d %d",min,max,j);
    // int sum=0;
    // for(int i=min;i<max+2;i++){
    //     sum2+=i;
    // }
    // printf("%d",sum2-sum);
    return 0;
}