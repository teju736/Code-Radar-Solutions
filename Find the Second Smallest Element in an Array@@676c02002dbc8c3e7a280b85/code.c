#include <stdio.h>
#include <stdbool.h>
int main() {
   int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k=1;
    int arr2[n];
    bool c=true;
    arr2[0]=arr[0];
    for(int i=1;i<n;i++){
        for(int j=0;j<k;j++){
            if(arr2[j]==arr[i]){
                c=false;
                break;
            }
        }
        if(c==true){
            arr2[k]=arr[i];
            ++k;
        }
        c=true;
    }
  
    if(k==1){
        printf("%d",-1);
        return 0;
    }

    for(int i=0;i<k-1;i++){
        for(int j=0;j<k-i-1;j++){
            if (arr2[j]>arr2[j+1]){
                int a=arr2[j];
                arr2[j]=arr2[j+1];
                arr2[j+1]=a;
            }
        }
    }
    
   printf("%d",arr2[1]);
    
    return 0;
}