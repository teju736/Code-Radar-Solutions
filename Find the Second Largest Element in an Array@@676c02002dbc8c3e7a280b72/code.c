#include <stdio.h>
#include <stdbool.h>
int main() {
    int n;
    scanf("%d",&n);
    if(n==1){
        printf("%d",-1);
        return 0;
    
    }
    int arr[n];
    int arr2[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    if(n==2){
        if(arr[1]>arr[0]){
            printf("%d",arr[0]);
        }
        else{
            printf("%d",arr[1]);
        }
        return 0;
    }
    int max=arr[0];
    int index=0;
    for(int i=0;i<n;i++){
        if (max<arr[i]){
                max=arr[i];
                index=i;
        }
    }
    int j=0;
    for(int i=0;i<n;i++){
        if (i!=index){
            arr2[j]=arr[i];
            j+=1;

       }
    }
   bool c=false;
    int max2=arr2[0];
    for(int i=0;i<n-1;i++){
        if(max2<=arr2[i]){
            if(max !=arr2[i]){
            max2=arr2[i];
            c=true;
            }
    
        }
    }
   if (c==false){
    printf("%d",-1);
    return 0;
   }
    printf("%d",max2);
    return 0;
}